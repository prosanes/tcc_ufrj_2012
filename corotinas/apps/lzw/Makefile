COMPONENT=BaseStationAppC
CFLAGS+=-DCC2420_NO_ACKNOWLEDGEMENTS
CFLAGS+=-DCC2420_NO_ADDRESS_RECOGNITION
CFLAGS+=-DTOSH_DATA_LENGTH=115

BUILD_EXTRA_DEPS += TestSerial.class
CLEAN_EXTRA = *.class TestSerialMsg.java

CFLAGS += -I$(TOSDIR)/lib/T2Hack

TestSerial.class: $(wildcard *.java) TestSerialMsg.java
	javac -target 1.4 -source 1.4 *.java

TestSerialMsg.java:
	mig java -target=null $(CFLAGS) -java-classname=TestSerialMsg TestSerial.h test_serial_msg -o $@

 
include $(MAKERULES)
