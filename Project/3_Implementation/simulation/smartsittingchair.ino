//smart chair monitoring..................................
#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

const int temp= A0;
const int flex= A1;
const int fire= A2;
const int mems= A3;
const int m1= 7;
const int m2= 6;
const int m3= 5;
const int m4= 4;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);

  pinMode(temp,INPUT);
  pinMode(flex,INPUT);
  pinMode(fire,INPUT);
  pinMode(mems,INPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);

  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);
  
  lcd.setCursor(1,0);lcd.print("SMART");
  lcd.setCursor(1,1);lcd.print("CHAIR");
  delay(1000);

  lcd.clear();
  
}

void loop() 
{ 
//temperature measurement.............................................................

  int t = analogRead(temp);
  t = map(t,0,1023,0,100);
  lcd.setCursor(0,0);lcd.print("T:");
  if(t <= 9){lcd.print("00");lcd.print(t);}
  else if(t <= 99){lcd.print("0");lcd.print(t);}
  else if(t <= 999){lcd.print(t);}

//flex measurement.............................................................

  int f = analogRead(flex);
  f = map(f,0,1023,0,100);
  lcd.setCursor(8,0);lcd.print("F:");
  if(f <= 9){lcd.print("00");lcd.print(f);}
  else if(f <= 99){lcd.print("0");lcd.print(f);}
  else if(f <= 999){lcd.print(f);}

//to read fire.....................................................................

  int fi = analogRead(fire);
  fi = map(fi,0,1023,0,100);
  lcd.setCursor(0,1);lcd.print("FI:");
  if(fi <=9){lcd.print("00");lcd.print(fi);}
  else if(fi <= 99){lcd.print("0");lcd.print(fi);}
  else if(fi <= 999){lcd.print(fi);}

//to read mems.....................................................................

  int m = analogRead(mems);
  m = map(m,0,1023,0,100);
  lcd.setCursor(8,1);lcd.print("M:");
  if(m <=9){lcd.print("00");lcd.print(m);}
  else if(m <= 99){lcd.print("0");lcd.print(m);}
  else if(m <= 999){lcd.print(m);}

  if(m >= 10 && m <= 20)
  {
    Serial.println("RIGHT....");
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
  }

  if(m >= 21 && m <= 30)
  {
    Serial.println("LEFT....");
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
  }

  if(m >= 31 && m <= 40)
  {
    Serial.println("REVERSE....");
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
  }

  if( m >= 50)
  {
    Serial.println("FORWARD....");
    digitalWrite(m1,LOW);
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
  }

  if(m <= 9)
  {
    Serial.println("STOPPED....");
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
  }
  
  delay(1000);
   
}
