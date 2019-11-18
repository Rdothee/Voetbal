//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_TAKLE_H
#define VOETBAL_TAKLE_H


#include "Actie.h"

class Takle : public Actie{
private:
 int aantalGoedeTackles;
 int aantalSlechteTakles;

public:
    Takle();
    virtual ~Takle();
    void geslaagdeTakle();
    void slechteTakle();
};


#endif //VOETBAL_TAKLE_H
