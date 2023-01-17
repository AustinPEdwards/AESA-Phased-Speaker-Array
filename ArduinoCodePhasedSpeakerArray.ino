#include <Tone.h>
Tone tone1;
Tone tone2;
Tone tone3;
Tone tone4;
Tone tone5;
float pi = 3.14159;
float theta = 0*pi/180;
float toneTime = 0.0000117;
float distance = .05;
float Time = 0;
float c = 343;
int i;
void setup()
{
  Serial.begin(9600);
  tone1.begin(26);
  tone2.begin(28);
  tone3.begin(30);
  tone4.begin(32);
  tone5.begin(34);
  if(theta > 0){ 
  Time = sin(theta)*2*pi*distance/c - toneTime;
  tone1.begin(26);
  tone2.begin(28);
  tone3.begin(30);
  tone4.begin(32);
  tone5.begin(34);
  }
  if(theta == 0){
  Time = 0;
  tone1.begin(26);
  tone2.begin(28);
  tone3.begin(30);
  tone4.begin(32);
  tone5.begin(34);
  }
  if(theta < 0){
  theta = -1 * theta;
  Time = sin(theta)*2*pi*distance/c - toneTime;
  tone1.begin(34);
  tone2.begin(32);
  tone3.begin(30);
  tone4.begin(28);
  tone5.begin(26);
  }

  tone1.play(NOTE_G7);
  delayMicroseconds(Time);
  tone2.play(NOTE_G7);
  delayMicroseconds(Time);
  tone3.play(NOTE_G7);
  delayMicroseconds(Time);
  tone4.play(NOTE_G7);
  delayMicroseconds(Time);
  tone5.play(NOTE_G7);
}
void loop(){}  
