//
// Created by robbe on 18/11/2019.
//

#include "Schiet.h"
int aantalSchotenOpDoel;
int aantalSchoten;
int goals;

Schiet::Schiet() {}

Schiet::~Schiet() {

}

void Schiet::schietOpDoel() {
   aantalSchotenOpDoel++;
}

void Schiet::schietMis() {
    aantalSchoten++;
}

void Schiet::schietEnScoort() {
    goals++;
}

int Schiet::getAantalSchotenOpDoel() const {
    return aantalSchotenOpDoel;
}

int Schiet::getAantalSchoten() const {
    return aantalSchoten;
}

int Schiet::getGoals() const {
    return goals;
}
