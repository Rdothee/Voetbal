//
// Created by robbe on 18/11/2019.
//

#include "Loop.h"



Loop::Loop(bool ver) {
    if(ver){
        aantalKm = 1;
    }else{
        aantalKm = 0.5;
    }
}
Loop::Loop(){}

Loop::~Loop() {

}

double Loop::getAantalKm() const {
    return aantalKm;
}
