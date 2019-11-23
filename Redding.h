//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_REDDING_H
#define VOETBAL_REDDING_H


#include "Actie.h"

class Redding : public Actie{

    bool redding;
public:
    Redding(bool geslaagd);

    virtual ~Redding();

    bool isRedding() const;

    Redding();
};


#endif //VOETBAL_REDDING_H
