void setup() {
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
 if(digitalRead(A0) == HIGH){
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(10);
 }
 else{
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
 }
}
