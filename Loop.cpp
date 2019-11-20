//
// Created by robbe on 18/11/2019.
//

#include "Loop.h"



Loop::Loop(int aantalGelopenKm) {
    this->aantalKmGelopen += aantalGelopenKm;
}

Loop::~Loop() {

}



int Loop::getAantalKmGelopen() const {
    return aantalKmGelopen;
}

