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
    Takle(bool geslaagd);
    virtual ~Takle();
    int geslaagdeTakle();
    void slechteTakle();

    int getAantalGoedeTackles() const;

    int getAantalSlechteTakles() const;
};


#endif //VOETBAL_TAKLE_H
