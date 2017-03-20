/*************************************************************************
**                                                                      **
**                                  Serial                              **
**       Joan torrescasana                       20/03/2017             **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
//SEMAFOR A
const int LED7 = 7;                        // LED7 es el pin digital 7
const int LED8 = 8;                        // LED8 es el pin digital 8
const int LED9 = 9;                        // LED9 es el pin digital 9
//SEMAFOR B
const int LED10 = 10;                      // LED10 es el pin digital 10
const int LED11 = 11;                      //LED11 es el pin digital 11
const int LED12 = 12;                      // LED12 es el pin digital 12



//********** SETUP *******************************************************

void setup()
{
  pinMode(LED7, OUTPUT);      // sets the digital pin as output
  pinMode(LED8, OUTPUT);      // sets the digital pin as output
  pinMode(LED9, OUTPUT);      // sets the digital pin as output
  pinMode(LED10, OUTPUT);      // sets the digital pin as output
  pinMode(LED11, OUTPUT);      // sets the digital pin as output
  pinMode(LED12, OUTPUT);      // sets the digital pin as output
}

void loop()
{
  digitalWrite(LED7, HIGH);   // sets the LED on
  digitalWrite(LED10, HIGH);   // sets the LED on
  delay(1000);                 // waits for a second
  digitalWrite(LED7, HIGH);   // sets the LED on
  digitalWrite(LED10, LOW);    // sets the LED off
  digitalWrite(LED12, HIGH);   // sets the LED on
  delay(4000);                  // waits for FOUR seconds
  digitalWrite(LED7, HIGH);   // sets the LED on
  digitalWrite(LED12, LOW);    // sets the LED off
  digitalWrite(LED11, HIGH);   // sets the LED on
  delay(1000);                  // waits for FOUR seconds
  digitalWrite(LED11, LOW);   // sets the LED on
  digitalWrite(LED7, HIGH);   // sets the LED on
  digitalWrite(LED10, HIGH);   // sets the LED on
  delay(1000);                  // waits for FOUR seconds
  digitalWrite(LED7, LOW);   // sets the LED on
  digitalWrite(LED9, HIGH);   // sets the LED on
  digitalWrite(LED10, HIGH);   // sets the LED on
  delay(4000);                  // waits for FOUR seconds
  digitalWrite(LED9, LOW);   // sets the LED on
  digitalWrite(LED8, HIGH);   // sets the LED on
  digitalWrite(LED10, HIGH);   // sets the LED on
  delay(1000);                  // waits for FOUR seconds
  digitalWrite(LED8, LOW);   // sets the LED on
  digitalWrite(LED7, HIGH);   // sets the LED on
  digitalWrite(LED10, HIGH);   // sets the LED on
}
