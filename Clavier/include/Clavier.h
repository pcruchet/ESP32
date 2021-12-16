/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Clavier.h
 * Author: pcruchet
 *
 * Created on 15 décembre 2021, 16:18
 */

#ifndef CLAVIER_H
#define CLAVIER_H

#include <Arduino.h>


void Initialiser();
char ScruterClavier();
void EcrireLigne(int _valeur);
int LireColonne();


#endif /* CLAVIER_H */

