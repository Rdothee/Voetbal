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
    int aantalPasses;

public:
    Middenvelder(string naam);

    virtual ~Middenvelder();
    int getAantalTakles();

    void pasStatistieken(bool geslaagd);

    int getAantalGeslaagdePasses() const;

    int getAantalSlechtePasses() const;

    int getAantalPasses() const;
};


#endif //VOETBAL_MIDDENVELDER_H
