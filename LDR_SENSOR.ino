void setup() {
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(4,OUTPUT);
}

void loop() {
 if(digitalRead(A0) == HIGH){
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(10);
 }
 else{
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
 }
}
