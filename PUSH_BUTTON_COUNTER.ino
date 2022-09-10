int a = 3;
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8;
int g = 9;
bool bp = false;
int pin = 10;
int counter = 0;
int state = 0;
int last = 0;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(pin, INPUT_PULLUP);
  displayDigit(counter);
}
void loop(){
  state = digitalRead(pin);
   if (state != last) {
    if (state == LOW) {
      bp = true;
      counter++;
      if( counter > 9) counter =0 ;   
  }
  delay(50);
   }
   last = state;
  if( bp ){
     turnOff();
     displayDigit(counter);
  }
}
void displayDigit(int digit)
{
 if(digit!=1 && digit != 4)
 digitalWrite(a,LOW);

 if(digit != 5 && digit != 6)
 digitalWrite(b,LOW);

 if(digit !=2)
 digitalWrite(c,LOW);

 if(digit != 1 && digit !=4 && digit !=7)
 digitalWrite(d,LOW);

 if(digit == 2 || digit ==6 || digit == 8 || digit==0)
 digitalWrite(e,LOW);

 if(digit != 1 && digit !=2 && digit!=3 && digit !=7)
 digitalWrite(f,LOW);

 if (digit!=0 && digit!=1 && digit !=7)
 digitalWrite(g,LOW);

}
void turnOff()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
