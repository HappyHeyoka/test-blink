/*
  testblink arduino cmake test
 */
#include "Arduino.h"

extern void stars(int s);

void setup()
{
  Serial.begin(57600);
  pinMode ( 13, OUTPUT );
  stars(20);
}


void blink ( int d )
{
  digitalWrite ( 13, HIGH ); // set the LED on
  delay ( d );           // wait for a second
  digitalWrite ( 13, LOW ); // set the LED off
  delay ( d );           // wait for a second
}

void loop()
{
  static int counter = 0;

  blink ( 100 ); // Blink for a second
  blink ( 500 ); // Blink for a second
  blink ( 250 ); // Blink for a second
  blink ( 500 ); // Blink for a second
  blink ( 100 ); // Blink for a second

  Serial.println ( "counter : #" + String ( counter++ ) );
}
