//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_TAKLE_H
#define VOETBAL_TAKLE_H


#include "Actie.h"

class Takle : public Actie{
private:
    Takle();

    bool geslaagd;

public:
    Takle(bool geslaagd);
    virtual ~Takle();
    int geslaagdeTakle();
    void slechteTakle();

    bool isGeslaagd() const;


};


#endif //VOETBAL_TAKLE_H
