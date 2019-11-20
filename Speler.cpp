//
// Created by robbe on 18/11/2019.
//

#include "Speler.h"
#include "Loop.h"
#include "Pas.h"
#include<iostream>;
using namespace std;


Speler::Speler(string naam) {
    this->naam = naam;
    cout<<"maak speler aan"<<endl;
}

Speler::~Speler() {
    for(int i=0;i<acties.size();i++){delete acties[i];}
    cout<<"verwijder speler"<<endl;
}

int Speler::getAantalPunten() const {
    return aantalPunten;
}

void Speler::setAantalPunten(int aantalPunten) {
    Speler::aantalPunten = aantalPunten;
}

void Speler::addActie(Actie * actie) {

    acties.push_back(actie);
}

const vector<Actie *> &Speler::getActies() const {
    return acties;
}
