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
int LED9 = 9;                         // LED9 es el pin digital 9
int LED10 = 10;                       // LED10 es el pin digital 10
int LED11 = 11;                       // LED11 es el pin digital 11
int LED12 = 12;                       // LED12 es el pin digital 12


//********** SETUP ****************************************************************
void setup()
{                                     // S'executa un sol cop

  pinMode(LED5, OUTPUT);              // defineix el pin 5 com a sortida
  pinMode(LED6, OUTPUT);              // defineix el pin 6 com a sortida
  pinMode(LED7, OUTPUT);              // defineix el pin 7 com a sortida
  pinMode(LED8, OUTPUT);              // defineix el pin 8 com a sortida
  pinMode(LED9, OUTPUT);              // defineix el pin 9 com a sortida
  pinMode(LED10, OUTPUT);             // defineix el pin 10 com a sortida
  pinMode(LED11, OUTPUT);             // defineix el pin 11 com a sortida
  pinMode(LED12, OUTPUT);             // defineix el pin 12 com as ortida

}

//********** LOOP *****************************************************************
void loop() 
{                                     // S'executa repetidament 
  
  digitalWrite(LED5, HIGH);
  delay(50);                        // espera 50msegon// activa el LED5
  digitalWrite(LED5, LOW);            // desactiva el LED5
  delay(50);
  digitalWrite(LED6, HIGH);          // activa el LED6
  delay(50);                        // espera 50ms segon 
  digitalWrite(LED6, LOW);           // desactiva el LED6 
  delay(50);                        // espera 50 mssegon
  digitalWrite(LED7, HIGH);           // activa el LED7
  delay(50);                        // espera 50ms segon
  digitalWrite(LED7, LOW);            // desactiva el LED7
  delay(50);                        // espera 50ms segon
  digitalWrite(LED8, HIGH);            // activa el LED8 
  delay(50);                        // espera 50ms segon
  digitalWrite(LED8, LOW);           // desactiva el LED8
  delay(50);                        // espera 50ms segon
  digitalWrite(LED9, HIGH);           // activa el LED9
  delay(50);                        // espera 50ms segon
  digitalWrite(LED9, LOW);            // desactiva el LED9
  delay(50);                        // espera 50ms segon
  digitalWrite(LED10, HIGH);           // activa el LED10 
  delay(50);                        // espera 50ms segon
  digitalWrite(LED10, LOW);          // desactiva el LED10
  delay(50);                        // espera 50ms segon
  digitalWrite(LED11, HIGH);          // activa el LED11
  delay(50);                        // espera 50ms segon
  digitalWrite(LED11, LOW);           // desactiva el LED11
  delay(50);                        // espera 50ms segon
  digitalWrite(LED12, HIGH);           // activa el LED12
  delay(50);                        // espera 50ms segon
  digitalWrite(LED12, LOW);          // desactiva el LED12
  delay(50);                        // espera 50ms segon
  
}


