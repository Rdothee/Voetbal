//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_MIDDENVELDER_H
#define VOETBAL_MIDDENVELDER_H


#include "Speler.h"

class Middenvelder : public Speler {


public:
    Middenvelder(string naam);

    virtual ~Middenvelder();
    int getAantalTakles();

};


#endif //VOETBAL_MIDDENVELDER_H
