//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_MIDDENVELDER_H
#define VOETBAL_MIDDENVELDER_H


#include "Speler.h"

class Middenvelder : public Speler {
private:
    int aantalGeslaagdePasses;
    int aantalSlechtePasses;
    int totaalAantalPasses;

public:
    Middenvelder(string naam);

    virtual ~Middenvelder();
    int getAantalTakles();

    void pasStatistieken();

    int getAantalGeslaagdePasses() const;

    int getAantalSlechtePasses() const;

    int getTotaalAantalPasses() const;
};


#endif //VOETBAL_MIDDENVELDER_H
