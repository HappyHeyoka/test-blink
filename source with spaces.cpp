/*
 * test arduino-cmake with spaces in file path
 */
#include <Arduino.h>

void stars(int s)
{
	for (int i=0; i<s; i++)
	{
		Serial.print('*');
	}
}
