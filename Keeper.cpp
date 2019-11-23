//
// Created by robbe on 18/11/2019.
//

#include "Keeper.h"
#include "Redding.h"

Keeper::Keeper(string naam) : Speler(naam) {}

Keeper::~Keeper() {

}

void Keeper::reddingStatistiek(){
    for(vector<Actie *>::iterator it = getActies().begin();it != getActies().end();++it){
        Redding* redding = dynamic_cast<Redding*>(*it); //downcast van Actie naar Redding
        if(redding != NULL){ //controleren of downcast valid is
            if(redding->isRedding()){
                aantalReddingen++;
            } else{aantalTegenGoals++;}
        }
    }

}

int Keeper::getAantalReddingen() const {
    return aantalReddingen;
}

int Keeper::getAantalTegenGoals() const {
    return aantalTegenGoals;
}
