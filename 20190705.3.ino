//버튼 인터럽트로 LED 켜기

#include "PinChangeInterrupt.h"

const int ledPin=12;
const int buttonPin=4;

int led_state=Low;
bool led_state_changed=false;

void buttonPressed(){
  led_state =(led_state ==LOW)?HIGH:LOW;
  led_state_changed=true;
}

void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  attachPCINT(digitalPinToPCINT(buttonPin), buttonPressed, RISING);
}

void loop(){
  if(led_state_changed){
    led_state_changed=false;
    digitalWrite(ledPin,led_state);
  }
}
