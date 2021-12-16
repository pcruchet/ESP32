#include <Arduino.h>

#include "Clavier.h"

void setup()
{

    Serial.begin(115200);
    Serial.println("init");
    Initialiser();
}

void loop()
{
    char touche;
    if ((touche = ScruterClavier()) != 0)
    {
        Serial.printf("Touche %c\n", touche);
    }

}
