/*
Write a program that causes the built-in LED connected to pin 13 on the Arduino to blink, alternating between fast blinks and slow blinks. The LED should blink 5
times quickly and then it should blink 5 more times slowly. When blinking quickly, the LED should have a 1 second period, so it should be high for 0.5 seconds 
and low for 0.5 seconds. When blinking slowly, the LED should have a 4 second period, so it should be high for 2 seconds and low for 2 seconds. The LED should 
continue to blink in this alternating fashion for as long as the Arduino receives power.  If you do not have an Arduino, you can use the web-based Arduino 
simulator at www.tinkercad.com. You will need to create an account for free. There are instructional videos on that website that will teach you how to use the 
simulator.*/

// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop(){
    for(int i = 0; i < 5; i ++){
      digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500);                      // wait for a second
      digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
      delay(500); 
    }
  
	for(int i = 0;i < 5; i++){
      digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(1500);                      // wait for a second
      digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
      delay(1500); 
    }

}
