/*

*/
int redLed=11;
int greenLed=10;
int blueLed=9;
void setup() {
    
}

void loop() {
   analogWrite(redLed,100);
    delay(1000);
    analogWrite(redLed,40);
    delay(1000);
    analogWrite(redLed,0);
    delay(1000);
    analogWrite(greenLed,100);
    delay(1000);
    analogWrite(greenLed,40);
    delay(1000);
    analogWrite(greenLed,0);
    delay(1000);
    analogWrite(blueLed,100);
    delay(1000);
    analogWrite(blueLed,40);
    delay(1000);
    analogWrite(blueLed,0);
    delay(1000); 
}
