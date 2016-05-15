/*
Build a circuit and write a program that allows the user to control the brightness of an LED 
by turning the potentiometer. When the user turns the potentiometer, the LED brightness 
should change as well.

Create a video (or a screencast) of the design in action. The video should show you turning 
the potentiometer clockwise and counter-clockwise to each extreme. The LED brightness should change.
*/

int knobvalue;
int potpin = A0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  knobvalue = analogRead(potpin);
  knobvalue = map(knobvalue, A0, 1023, A0, 255);
  analogWrite(9, knobvalue);
}





