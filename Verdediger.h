//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_VERDEDIGER_H
#define VOETBAL_VERDEDIGER_H


#include "Speler.h"

class Verdediger : public Speler{
private:
    int aantalGeslaagdeTakles;
    int aantalGefaaldeTakles;
    int aantalTakles;
public:
    Verdediger(string naam);

    virtual ~Verdediger();
    void verdedig();


    void tackleStatistiek();

    int getAantalGeslaagdeTakles() const;

    int getAantalGefaaldeTakles() const;

    int getAantalTakles() const;
};


#endif //VOETBAL_VERDEDIGER_H
