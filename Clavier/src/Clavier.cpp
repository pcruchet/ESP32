#include "Clavier.h"

int ligne[4] = {16, 18, 5, 4}; // Broches pour les lignes
int colonne[3] = {14, 12, 13}; // Broches pour les colonnes resistances PullDown

void Initialiser()
{
    int indice;   
    for (indice = 0; indice < 4; indice++)
        pinMode(ligne[indice], OUTPUT);

    for (indice = 0; indice < 3; indice++)
        pinMode(colonne[indice], INPUT);
}

char ScruterClavier()
{
    char touche[12] = {'1','2','3','4','5','6','7','8','9','*','0','#'};
    char retour = 0;
    int valLigne = 0;
    int valColonne;
    do
    {
        EcrireLigne(valLigne++);
        delay(100);
        valColonne = LireColonne();
    }
    while (valColonne == -1 && valLigne < 4);

    if (valColonne != -1)
        retour = touche[(valLigne - 1) * 3 + valColonne];
    
    return retour;
}

void EcrireLigne(int _valeur) 
{
    int indice;

    for (indice = 0; indice < 4; indice++)
    {
        if (indice == _valeur)
            digitalWrite(ligne[indice], HIGH);
        else
            digitalWrite(ligne[indice], LOW);
    }
}

int LireColonne()
{
    int indice;
    int retour = -1;
    for (indice = 0; indice < 3; indice++)
    {
        if (digitalRead(colonne[indice]))
            retour = indice;
    }
    return retour;
}
