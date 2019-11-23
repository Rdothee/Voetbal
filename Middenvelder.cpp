//
// Created by robbe on 18/11/2019.
//

#include "Middenvelder.h"
#include "Pas.h"

Middenvelder::Middenvelder(string naam) : Speler(naam) {}

Middenvelder::~Middenvelder() {

}

void Middenvelder::pasStatistieken() {
    for(vector<Actie *>::iterator it = getActies().begin();it != getActies().end();++it){
        Pas* pas;
        pas = dynamic_cast<Pas*>(*it); //downcast van Actie naar Pas
        if(pas != NULL){
            if(pas->isGoedePas()){
                aantalGeslaagdePasses++;
            } else{aantalSlechtePasses++;}
            totaalAantalPasses++;
        }
    }
}


int Middenvelder::getAantalGeslaagdePasses() const {
    return aantalGeslaagdePasses;
}

int Middenvelder::getAantalSlechtePasses() const {
    return aantalSlechtePasses;
}

int Middenvelder::getTotaalAantalPasses() const {
    return totaalAantalPasses;
}

