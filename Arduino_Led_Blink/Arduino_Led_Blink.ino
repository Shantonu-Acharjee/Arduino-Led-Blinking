int ledPin = 13;
int A = 1000;
void setup(){
  pinMode(ledPin , OUTPUT);
}
void loop(){
  digitalWrite(ledPin, HIGH);
  delay(A);
  digitalWrite(ledPin,LOW);
  delay(A);
}
