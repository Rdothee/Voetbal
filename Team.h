//
// Created by robbe on 22/11/2019.
//

#ifndef VOETBAL_TEAM_H
#define VOETBAL_TEAM_H

#include <iostream>

#include "Speler.h"
using namespace std;

class Team {
    vector<Speler*>spelers;
    string naam;
    const int halveKmGelopen=5;
    const int geslaagdeActie=10;
    const int gefaaldeActie= 5;

public:
    Team(string naam);

    virtual ~Team();

    void voegToe(Speler *pSpeler);

    const vector<Speler*> & getSpelers() const;


    void schrijfSpelers();
};


#endif //VOETBAL_TEAM_H
