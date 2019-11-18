//
// Created by robbe on 18/11/2019.
//

#include "Pas.h"

Pas::Pas() {}

Pas::~Pas() {

}

void Pas::goeiePas() {
    aantalGeslaagdePasses++;
}

void Pas::slechtePas() {
    aantalSlechtePasses++;
}

int Pas::getAantalGeslaagdePasses() const {
    return aantalGeslaagdePasses;
}

int Pas::getAantalSlechtePasses() const {
    return aantalSlechtePasses;
}
