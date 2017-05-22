/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                       20/03/2017             **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
byte num  [7]= {5,6,7,8,9,10,11};
byte num0 [7]= {1,1,1,0,1,1,1};
byte num1 [7]= {1,0,0,0,0,0,1};
byte num2 [7]= {1,1,0,1,1,1,0};
byte num3 [7]= {1,1,0,1,0,1,1};
byte num4 [7]= {1,0,1,1,0,0,1};
byte num5 [7]= {0,1,1,1,0,1,1};
byte num6 [7]= {0,1,1,1,1,1,1};
byte num7 [7]= {1,1,0,0,0,0,1};
byte num8 [7]= {1,1,1,1,1,1,1};
byte num9 [7]= {1,1,1,1,0,1,1};

//********** SETUP *******************************************************
void setup() {   // put your setup code here, to run once



for (int i=0; i<7; i++)
{
pinMode (num [i],OUTPUT);
}
}

//********** loop *******************************************************
void loop() {


for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num0[i]);
}
delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num1[i]);
}
delay (1000); 
  for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num2[i]);
}
delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num3[i]);
}
delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num4[i]);
}
delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num5[i]);
  }
  delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num6[i]);
  }
  delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num7[i]);
  }
  delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num8[i]);
  }
  delay (1000); 
for (int i=0; i<7; i++)
{
  digitalWrite(num[i],num9[i]);
}
delay (1000); 
}
