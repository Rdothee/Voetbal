//
// Created by robbe on 18/11/2019.
//

#include "Loop.h"
int aantalKmGelopen;


Loop::Loop() {

}

Loop::~Loop() {

}



int Loop::getAantalKmGelopen() const {
    return aantalKmGelopen;
}

void Loop::loopAfstand() {
    aantalKmGelopen++;
}
