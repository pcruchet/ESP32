#include <Arduino.h>
#include <Adafruit_NeoPixel.h> //pio lib install 11901

#define PIN        33 // La broche ou est connectée le ruban
#define NUMPIXELS 60 // Nombre de leds

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 

void setup() {
  pixels.begin(); 
}

void loop() {
  pixels.clear(); 
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(0, 150, 0)); // Rouge,Vert,Bleu

    pixels.show();   

    delay(DELAYVAL);
  }
}