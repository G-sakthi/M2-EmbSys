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