int LED = 3;
int LED2 =4;
int Buz = 12;
int Sensor =A0;
int Flame = HIGH;
void setup(){
  pinMode(LED,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(Buz,OUTPUT);
  pinMode(Sensor,INPUT);
}
void loop(){
  Flame = digitalRead(Sensor);
  if(Flame == LOW){
    digitalWrite(LED,HIGH);
    digitalWrite(Buz,HIGH);
    delay(200);
    digitalWrite(LED2,LOW);
  }
  else{
    digitalWrite(LED,LOW);
    digitalWrite(Buz,LOW);
    digitalWrite(LED2,HIGH);
  }
}
