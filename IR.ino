void setup() {
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
 if(digitalRead(A0) == LOW){
  digitalWrite(3,HIGH);
  delay(10);
 }
 else{
  digitalWrite(3,LOW);
 }
}
