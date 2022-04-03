const int interruptPin = 5; //GPIO 0 (Flash Button) STEP 1
const int LED=2; //On board blue LED 
 
void setup() { 
  Serial.begin(115200); 
  pinMode(LED,OUTPUT); 
  pinMode(interruptPin, INPUT_PULLUP); 
  attachInterrupt(digitalPinToInterrupt(interruptPin), myInterruptFunction, CHANGE);// STEP 2
} 
 
void loop() 
{ 
    digitalWrite(LED,HIGH); //LED off 
    delay(1000); 
    digitalWrite(LED,LOW); //LED on 
    delay(1000); 
} 
 
//This program get executed when interrupt is occurs i.e.change of input state - STEP 3
ICACHE_RAM_ATTR void myInterruptFunction() {
   Serial.println("Interrupt Detected"); 
}


//void handleInterrupt() { 
//    Serial.println("Interrupt Detected"); 
//}
