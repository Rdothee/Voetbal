//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_SPELER_H
#define VOETBAL_SPELER_H

#include "Vector";
#include <iostream>
#include "Actie.h"
using namespace std;
class Speler {
private:
   int aantalPunten;
   string naam;
   double aantalGelopenkm;
   vector<Actie*> acties;
public:
    Speler(string naam);

    virtual ~Speler();

    int getAantalPunten() const;

    void setAantalPunten(int aantalPunten);
    void addActie(Actie * actie);


    const vector<Actie *> &getActies() const;

    double loop();

    vector<Actie *> &getActies();

    const string &getNaam() const;
};


#endif //VOETBAL_SPELER_H
