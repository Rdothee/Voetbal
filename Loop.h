//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_LOOP_H
#define VOETBAL_LOOP_H


#include "Actie.h"

class Loop : public Actie{
private:

    double aantalKm=0;

public:
    Loop(bool langeAfstand);
    virtual ~Loop();

    double getAantalKm() const;


    Loop();
};


#endif //VOETBAL_LOOP_H
