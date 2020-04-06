//Tanvesh Bhattad
#include <SPI.h>
#include "SPI_anything.h"
typedef struct myStruct
{
  byte a;
  int b;
  long c;
};

volatile myStruct foo;
volatile bool haveData = false;

void setup ()
  {
  Serial.begin (115200);   
  pinMode(MISO, OUTPUT);
  
  SPCR |= _BV(SPE);
  SPI.attachInterrupt();
void loop () 
  { 
  if (haveData)
     {
     Serial.println ((int) foo.a);
     Serial.println (foo.b);
     Serial.println (foo.c);
     Serial.println ();
     haveData = false;
     }
  }  

// SPI interrupt routine
ISR (SPI_STC_vect)
  {
  SPI_readAnything_ISR (foo);
  haveData = true;
  }  
