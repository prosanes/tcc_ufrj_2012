#include "Timer.h"

module aplicacaoTesteC @safe()
{
    uses interface Boot;
    uses interface Leds;
    uses interface TaskSerial as TarefaSerial;
    uses interface TaskRadio as TarefaRadio;
    uses interface TaskSense as TarefaSense;
    uses interface Timer<TMilli>;

    uses interface Read<uint16_t>;

    uses interface Packet;
    uses interface AMSend;
    uses interface SplitControl as RadioControl;

    uses interface SerialPacket;
    uses interface SerialAMSend;
    uses interface SerialSplitControl as SerialControl;
}
implementation
{
    /* Variaveis */
    unsigned int t1;
    uint16_t valorLido;
    message_t packet;
    message_t serialPacket;

    /* Tarefas
    */
    task void TarefaBasic()
    {
        printf("tarefa Basic\n");
        printfflush();
    }

    event void TarefaSense.runTask()
    {
        call Read.read();
    }

    event void TarefaRadio.runTask()
    {
        uint16_t *msg;

        msg = call Packet.getPayload(&packet, sizeof(uint16_t));

        (*msg) = valorLido;
        call AMSend.send(AM_BROADCAST_ADDR, &packet, sizeof(uint16_t));
    }

    event void TarefaSerial.runTask()
    {
        uint16_t *msg;

        msg = call Packet.getPayload(&serialPacket, sizeof(uint16_t));

        (*msg) = valorLido;
        call AMSend.send(AM_BROADCAST_ADDR, &packet, sizeof(uint16_t));
    }

    /* events */
    event void Boot.booted()
    {
        call RadioControl.start();
        call SerialControl.start();
        call Timer.startPeriodic(250);         
    }

    event void RadioControl.startDone(error_t err) {
        if (err == SUCCESS) 
            radioOn = 1;
    }                                             
    event void RadioControl.stopDone(error_t err) {}

    event void SerialControl.startDone(error_t err) {
        if (err = SUCCESS)
            serialOn = 1;
    }
    event void SerialControl.stopDone(error_t err) {}

    event void Timer.fired()
    {                       
        call TarefaSense.postTask();
    }                       

    event void Read.readDone(error_t result, uint16_t data)
    {                                                      
        valorLido = data;
        if (radioOn) call TarefaRadio.postTask();
        if (serialOn) call TarefaSerial.postTask();
    }                                                      

}
