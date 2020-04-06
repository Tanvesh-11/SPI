
//Tanvesh Bhattad
#include <SPI.h>
#include "SPI_anything.h"
typedef struct myStruct
{
  byte a;
  int b;
  long c;
};

myStruct foo;

void setup ()
  {
  SPI.begin ();
  SPI.setClockDivider(SPI_CLOCK_DIV8);   // Slow down the master a bit
  foo.a = 42;
  foo.b = 32000;
  foo.c = 100000;
  }  

void loop () 
  { 
  digitalWrite(SS, LOW);    
  SPI_writeAnything (foo);
  digitalWrite(SS, HIGH);
  delay (1000);  
  foo.c++;
  }  
