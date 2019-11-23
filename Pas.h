//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_PAS_H
#define VOETBAL_PAS_H


#include "Actie.h"

class Pas : public Actie{
private:
    bool goedePas;
public:
    Pas(bool geslaagd);
    virtual ~Pas();




    Pas();

    bool isGoedePas() const;
};


#endif //VOETBAL_PAS_H
