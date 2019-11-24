//
// Created by robbe on 18/11/2019.
//

#include "Speler.h"
#include "Loop.h"
#include "Pas.h"
#include<iostream>
using namespace std;


Speler::Speler(string naam) {
    this->naam = naam;
    cout<<"maak speler aan"<<endl;
}

Speler::~Speler() {
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

const string &Speler::getNaam() const {
    return naam;
}

vector<Actie *> &Speler::getActies()  {
    return acties;
}

double Speler::loop() {
    for(vector<Actie *>::iterator it = acties.begin();it != acties.end();++it){
        Loop* loop = dynamic_cast<Loop*>(*it);
        if(loop != NULL){
            this->aantalGelopenkm += loop->getAantalKm();
        }
    }
    return aantalGelopenkm;
}

