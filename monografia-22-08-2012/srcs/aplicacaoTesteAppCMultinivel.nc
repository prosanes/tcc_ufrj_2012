#include "Timer.h"

configuration aplicacaoTesteAppC 
{
}
implementation
{
  components MainC, aplicacaoTesteC, LedsC, TinySchedulerC;
  components new DemoSensorC() as Sensor;
  components new TimerMilliC() as Timer;

  components ActiveMessageC;                   
  components new AMSenderC(1);

  components SerialActiveMessageC;
  components new SerialAMSenderC(2);

  aplicacaoTesteC.Timer -> Timer;

  aplicacaoTesteC-> MainC.Boot;
  aplicacaoTesteC.Leds -> LedsC;

  aplicacaoTesteC.Read -> Sensor;

  aplicacaoTesteC.AMSend -> AMSenderC;           
  aplicacaoTesteC.RadioControl -> ActiveMessageC;
  aplicacaoTesteC.Packet -> AMSenderC;

  BlinkToRadioC.SerialAMPacket -> SerialAMSenderC;
  BlinkToRadioC.SerialAMSend -> SerialAMSenderC;
  BlinkToRadioC.SerialSplitControl -> SerialActiveMessageC;

  aplicacaoTesteC.TarefaSense->
  TinySchedulerC.TaskSense[unique("TinySchedulerC.TaskSense")];
  aplicacaoTesteC.TarefaRadio->
  TinySchedulerC.TaskRadio[unique("TinySchedulerC.TaskRadio")];
  aplicacaoTesteC.TarefaSerial->
  TinySchedulerC.TaskSerial[unique("TinySchedulerC.TaskSerial")];
}

