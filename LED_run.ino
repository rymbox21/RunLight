
void setup() {
  pinMode (A0, OUTPUT);
  pinMode (A1, OUTPUT);
  pinMode (A2, OUTPUT);
 }

void loop () {
  int ledPin[] = {A0, A1, A2};
  int i;
  for (i=0; i < 3; i++) {
     digitalWrite(ledPin[i], HIGH);
     delay (30);
     digitalWrite(ledPin[i], LOW);
     delay (30);
    }
}
