/*
 * Copyright (c) 2008 Stanford University.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Stanford University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL STANFORD
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
/**
 * This application is derived from a similar application in the TinyThread 
 * implementation by William P. McCartney from Cleveland State University (2006)
 *
 * This application implements a threaded approach to bouncing messages back and forth
 * between two motes.  To run it you will need to burn one mote with node ID 0, and a 
 * second mote with node ID 1.  Three different threads run that each send a 
 * message and then wait to receive a message before sending their next one.  After
 * each message reception, an LED is toggled to indicate that it was received.  Thread
 * 0 blinks led0, thread 1 blinks led1, and thread 2 blinks led2.  The three 
 * threads run independently, and three different messages are bounced back and 
 * forth between the two motes in an unsynchronized fashion.  In contrast to the simple
 * Bounce application also found in this directory, once a thread receives a message
 * it waits on a Barrier before continuing on and turning on its led.  A synchronization 
 * thread is used to wait until all three messages have been received before unblocking
 * the barrier.  In this way, messages are still bounced back and forth between the 
 * two motes in an asynchronous fashion, but all leds come on at the same time 
 * because of the Barrier and the synchronization thread.  The effect is that all three
 * leds on one mote flash in unison, followed by all three on the other mote back
 * and forth forever.  
 *
 * @author Kevin Klues <klueska@cs.stanford.edu>
 */

module BarrierBounceC {
  uses {
    interface Boot;
    interface BlockingStdControl as BlockingAMControl;
    interface Barrier;

    interface Thread as BounceThread0;
    interface BlockingAMSend as BlockingAMSend0;
    interface BlockingReceive as BlockingReceive0;
    interface Packet;
    
    interface Thread as SyncThread;

    interface Leds;
  }
}

implementation {
  message_t m0,m1,m2;
  uint8_t i = 0;
  uint8_t j = 0;

  event void Boot.booted() {
    //Start the sync thread to power up the AM layer
    call SyncThread.start(NULL);
  }
  
  event void BounceThread0.run(void* arg) {
    uint8_t* recv;
    uint8_t* send;

    for(;;) {
      i++;
      send = call Packet.getPayload(&m0, sizeof(uint8_t));
      (*send) = i;

      call BlockingAMSend0.send(!TOS_NODE_ID, &m0, 0);
      if(call BlockingReceive0.receive(&m0, 5000) == SUCCESS) {
        recv = call Packet.getPayload(&m0, sizeof(uint8_t));
        //if ((*recv) % 2 == 0)
          //  call Leds.led1Toggle();
        if ((*recv) & 0x1 == 0x1)
            call Leds.led0On();
        else
            call Leds.led0Off();

        if ((*recv) & 0x2 == 0x2)
            call Leds.led1On();
        else
            call Leds.led1Off();

        if ((*recv) & 0x4 == 0x4)
            call Leds.led2On();
        else
            call Leds.led2Off();
      	call BounceThread0.sleep(1000);
      }
    }
  }
  
  
  event void SyncThread.run(void* arg) {
    //Once the am layer is powered on, start the rest of
    //  the threads
    call BlockingAMControl.start();
    call BounceThread0.start(NULL);
    
    while(1)
    {
        //call Leds.led2Toggle();
        call SyncThread.sleep(1000);
    }
  }
}
