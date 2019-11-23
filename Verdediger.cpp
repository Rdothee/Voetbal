//
// Created by robbe on 18/11/2019.
//

#include "Verdediger.h"
#include "Takle.h"

Verdediger::Verdediger(string naam) : Speler(naam) {}

Verdediger::~Verdediger() {

}


void Verdediger::tackleStatistiek(){
    for(vector<Actie *>::iterator it = getActies().begin();it != getActies().end();++it){
        Takle* takle = dynamic_cast<Takle*>(*it); //downcast van Actie naar Pas
        if(takle != NULL){
            if(takle->isGeslaagd()){
                aantalGeslaagdeTakles++;
            } else{aantalGefaaldeTakles++;}
            aantalTakles++;
        }
    }
}

int Verdediger::getAantalGeslaagdeTakles() const {
    return aantalGeslaagdeTakles;
}

int Verdediger::getAantalGefaaldeTakles() const {
    return aantalGefaaldeTakles;
}

int Verdediger::getAantalTakles() const {
    return aantalTakles;
}
