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
   std::vector<Actie*> acties;
   string naam;
public:
    Speler(string naam);

    virtual ~Speler();

    int getAantalPunten() const;

    void setAantalPunten(int aantalPunten);
    void addActie(Actie * actie);

    const vector<Actie *> &getActies() const;
};


#endif //VOETBAL_SPELER_H
