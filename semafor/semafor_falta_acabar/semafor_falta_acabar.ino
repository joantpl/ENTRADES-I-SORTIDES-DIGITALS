/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             5/03/2017        **
*************************************************************************/

//****** Includes  *******************************************************
//****** Variables *******************************************************
int LED7 = 7;                        // LED5 es el pin digital 7
int LED8 = 8;                         // LED6 es el pin digital 8
int LED9 = 9;                         // LED7 es el pin digital 9
int LED10 = 10;                         // LED8 es el pin digital 10
int LED11 = 11;                         // LED7 es el pin digital 11
int LED12 = 12;                         // LED8 es el pin digital 12
int temp=1000;                      //variable per delay1 segon

//********** SETUP *******************************************************
void setup() {
  
 pinMode(LED7, OUTPUT);              // defineix el pin 7 com a sortida
  pinMode(LED8, OUTPUT);              // defineix el pin 8 com a sortida
  pinMode(LED9, OUTPUT);              // defineix el pin 9 com a sortida
  pinMode(LED10, OUTPUT);              // defineix el pin 10 com a sortida
 pinMode(LED11, OUTPUT);              // defineix el pin 11 com a sortida
  pinMode(LED12, OUTPUT);              // defineix el pin 12 com a sortida
 
  

}
//********** LOOP ********************************************************
void loop() {

  digitalWrite(LED12, HIGH);             
 digitalWrite(LED9, HIGH);  
 delay (temp);
           
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, LOW);  
  
 

}
