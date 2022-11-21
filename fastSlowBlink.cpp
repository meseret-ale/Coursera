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
