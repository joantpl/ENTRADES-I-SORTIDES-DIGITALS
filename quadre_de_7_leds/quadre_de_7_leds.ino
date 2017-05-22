/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                       27/03/2017             **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
const int num5 = 5;
const int num6 = 6;
const int num7 = 7;
const int num8 = 8;
int seg = 2000;

//********** SETUP *******************************************************
void setup() {   // put your setup code here, to run once
pinMode (num5, OUTPUT);
pinMode (num6, OUTPUT);
pinMode (num7, OUTPUT);
pinMode (num8, OUTPUT);

digitalWrite(num5, LOW);
digitalWrite(num6, LOW);
digitalWrite(num7, LOW);
digitalWrite(num8, HIGH);
}


//********** loop *********************************************************
  
void loop() { // put your main code here, to run repeatedly:

digitalWrite(num8,LOW);
digitalWrite(num5,HIGH);

delay(seg);

digitalWrite(num5,LOW);
digitalWrite(num8,HIGH);
digitalWrite(num7,HIGH);

delay(seg);


digitalWrite(num8,LOW);
digitalWrite(num7,HIGH);
digitalWrite(num5,HIGH);

delay(seg);

digitalWrite(num8,HIGH);
digitalWrite(num7,HIGH);
digitalWrite(num5,HIGH);

delay(seg);

digitalWrite(num8,HIGH);
digitalWrite(num7,HIGH);
digitalWrite(num5,HIGH);



}



