//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_LOOP_H
#define VOETBAL_LOOP_H


#include "Actie.h"

class Loop : public Actie{
private:
    int aantalKmGelopen;
public:
    void loopAfstand();
    Loop(int aantalGelopenKm);
    virtual ~Loop();

    int getAantalKmGelopen() const;

};


#endif //VOETBAL_LOOP_H
