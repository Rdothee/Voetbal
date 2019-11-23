//
// Created by robbe on 18/11/2019.
//

#include "Takle.h"

Takle::Takle(bool geslaagd) {
    this->geslaagd = geslaagd;
}
Takle::Takle(){

}

Takle::~Takle() {

}

bool Takle::isGeslaagd() const {
    return geslaagd;
}
