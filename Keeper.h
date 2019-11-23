//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_KEEPER_H
#define VOETBAL_KEEPER_H


#include "Speler.h"

class Keeper : public Speler{
private:

    int aantalReddingen;
    int aantalTegenGoals;
public:
    Keeper(string naam);

    virtual ~Keeper();

    void reddingStatistiek();

    int getAantalReddingen() const;

    int getAantalTegenGoals() const;


};


#endif //VOETBAL_KEEPER_H
