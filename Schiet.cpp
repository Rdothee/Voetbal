//
// Created by robbe on 18/11/2019.
//

#include "Schiet.h"

int aantalSchotenOpDoel;
int aantalSchoten;
int goals;

Schiet::Schiet(bool gescoord) {
   this->gescoord = gescoord;
}


Schiet::Schiet(){}
Schiet::~Schiet() {

}

bool Schiet::isGescoord() const {
    return gescoord;
}
