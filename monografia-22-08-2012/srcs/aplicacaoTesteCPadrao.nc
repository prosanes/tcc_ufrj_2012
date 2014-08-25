
/**
 * Implementa aplicativo de teste do Scheduler de prioridade 
 **/

#include "Timer.h"
#include "printf.h"

module aplicacaoTesteC @safe()
{
    uses interface Boot;
    uses interface Leds;

    uses interface Counter<TMicro, uint32_t> as Timer1;
}
implementation
{
    /* Variaveis */
    unsigned int t1;
    bool over;

    async event void Timer1.overflow()
    {
        over = TRUE;
    }


    /* Tarefas
    */
    task void Tarefa1()
    {
        uint16_t i = 0;
        uint16_t k = 1;
        for (i = 0; i < 65000; i++)
        {
            k = k * 2;
        }
        t1 = call Timer1.get();
        printf("tempo final: %u\n", t1);
        if (over == TRUE)
            printf("OVERFLOW!!\n");
        printfflush();
    }
    task void Tarefa2()
    {
        uint16_t i = 0;
        uint16_t k = 1;
        for (i = 0; i < 65000; i++)
        {
            k = k * 2;
        }
    }

    // ...

    task void Tarefa99()
    {
        uint16_t i = 0;
        uint16_t k = 1;
        for (i = 0; i < 65000; i++)
        {
            k = k * 2;
        }
    }

    /* Boot
    */
    event void Boot.booted()
    {
        over = FALSE;
        t1 = call Timer1.get();
        printf("tempo inicial: %u\n", t1);
        printfflush();
        
        post Tarefa2();
        post Tarefa3();
        // ...
        post Tarefa99();

        post Tarefa1();
    }
}
