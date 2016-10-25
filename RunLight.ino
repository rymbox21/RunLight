//Set output pins
void setup() {
  pinMode (A0, OUTPUT);
  pinMode (A1, OUTPUT);
  pinMode (A2, OUTPUT);
 }
//Alternately turns on/off LED
void loop () {
  int ledPin[] = {A0, A1, A2};
  int i;
  for (i=0; i < 3; i++) {
     digitalWrite(ledPin[i], HIGH);   //Turns on the LED
     delay (30);                      //Delay in miliseconds
     digitalWrite(ledPin[i], LOW);    //Turns off the LED
     delay (30);                      //Delay in miliseconds 
    }
}
