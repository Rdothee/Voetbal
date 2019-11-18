//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_PAS_H
#define VOETBAL_PAS_H


#include "Actie.h"

class Pas : public Actie{
private:
    int aantalGeslaagdePasses;
    int aantalSlechtePasses;
public:
    Pas();
    virtual ~Pas();
    void goeiePas();
    void slechtePas();

    int getAantalGeslaagdePasses() const;

    int getAantalSlechtePasses() const;
};


#endif //VOETBAL_PAS_H
