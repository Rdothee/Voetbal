//
// Created by robbe on 18/11/2019.
//

#include "Aanvaller.h"
#include "Schiet.h"
#include <iostream>
using namespace std;
Aanvaller::Aanvaller(string naam) : Speler(naam) {

}

void Aanvaller::schietStatistieken(){
    for(vector<Actie *>::iterator it = getActies().begin();it != getActies().end();++it){
        Schiet* schiet = dynamic_cast<Schiet*>(*it); //downcast van Actie naar Pas
        if(schiet != NULL){
            if(schiet->isGescoord()){
                aantalGoals++;
            } else{aantalGemiste++;}
            totaalAantalSchoten++;
        }
    }
}

int Aanvaller::getAantalGemisteSchoten() const {
    return aantalGemiste;
}

int Aanvaller::getTotaalAantalSchoten() const {
    return totaalAantalSchoten;
}

int Aanvaller::getAantalGoals() const {
    return aantalGoals;
}

Aanvaller::~Aanvaller() {

}
