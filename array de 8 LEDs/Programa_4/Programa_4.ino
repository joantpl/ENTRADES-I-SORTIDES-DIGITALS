/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                             5/03/2017       **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************

int LED5 = 5;                        // LED5 es el pin digital 5
int LED6 = 6;                         // LED6 es el pin digital 6
int LED7 = 7;                         // LED7 es el pin digital 7
int LED8 = 8;                         // LED8 es el pin digital 8
int temp=1000;                      //variable per delay1 segon


//********** SETUP ****************************************************************
void setup()
{                                     // S'executa un sol cop

  pinMode(LED5, OUTPUT);              // defineix el pin 5 com a sortida
  pinMode(LED6, OUTPUT);              // defineix el pin 6 com a sortida
  pinMode(LED7, OUTPUT);              // defineix el pin 7 com a sortida
  pinMode(LED8, OUTPUT);              // defineix el pin 8 com a sortida


}

//********** LOOP *****************************************************************
void loop() 
{                                     // S'executa repetidament 
 digitalWrite(LED5, LOW);             
 digitalWrite(LED6, LOW);             // CONTA EL NUM 0 
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, LOW);             
   delay(1000); 
 digitalWrite(LED5, HIGH);             
 digitalWrite(LED6, LOW);             // CONTA NUM 1
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, LOW);             
   delay(1000); 
  digitalWrite(LED5, LOW);             
 digitalWrite(LED6, HIGH);             // CONTA NUM 2
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, LOW);            
   delay(1000); 
 digitalWrite(LED5, HIGH);             
 digitalWrite(LED6, HIGH);             // CONTA NUM 3 
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, LOW);             
   delay(1000); 
 digitalWrite(LED5, LOW);             
 digitalWrite(LED6, LOW);             // CONTA NUM 4
 digitalWrite(LED7, HIGH);            
 digitalWrite(LED8, LOW);             
   delay(1000); 
 digitalWrite(LED5, HIGH);            
 digitalWrite(LED6, LOW);             // CONTA NUM 5
 digitalWrite(LED7, HIGH);             
 digitalWrite(LED8, LOW);             
   delay(1000); 
  digitalWrite(LED5, LOW);             
 digitalWrite(LED6, HIGH);             // CONTA NUM 6
 digitalWrite(LED7, HIGH);            
 digitalWrite(LED8, LOW);             
   delay(1000); 
 
 digitalWrite(LED5, HIGH);             
 digitalWrite(LED6, HIGH);             // CONTA NUM 7
 digitalWrite(LED7, HIGH);             
 digitalWrite(LED8, LOW);             
   delay(1000); 
 
 digitalWrite(LED5, LOW);             
 digitalWrite(LED6, LOW);             // CONTA NUM 8 
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, HIGH);             
   delay(1000);
 digitalWrite(LED5, HIGH);             
 digitalWrite(LED6, LOW);             // CONTA NUM 9
 digitalWrite(LED7, LOW);            
 digitalWrite(LED8, HIGH);            
   delay(1000); 
  digitalWrite(LED5, LOW);             
 digitalWrite(LED6, HIGH);             // CONTA NUM 10
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, HIGH);             
   delay(1000); 
  digitalWrite(LED5, LOW);             
 digitalWrite(LED6, LOW);             // CONTA NUM 11
 digitalWrite(LED7, HIGH);             
 digitalWrite(LED8, HIGH);             
   delay(1000);
 digitalWrite(LED5, HIGH);             
 digitalWrite(LED6, HIGH);             // CONTA NUM 12
 digitalWrite(LED7, LOW);             
 digitalWrite(LED8, HIGH);             
   delay(1000); 
 
 digitalWrite(LED5, HIGH);            
 digitalWrite(LED6, LOW);             // CONTA NUM 13
 digitalWrite(LED7, HIGH);             
 digitalWrite(LED8, HIGH);            
   delay(1000);          

  digitalWrite(LED5, HIGH);             
 digitalWrite(LED6, HIGH);             // CONTA NUM 15
 digitalWrite(LED7, HIGH);             
 digitalWrite(LED8, HIGH);             
   delay(1000); 
 
 
 
 
 
 
 
 
 
 
 
 
}


