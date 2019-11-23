//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_AANVALLER_H
#define VOETBAL_AANVALLER_H
#include "Speler.h"
#include <iostream>

using namespace std;

class Aanvaller: public Speler{
private:
    int aantalGemiste;
    int totaalAantalSchoten;
    int aantalGoals;
public:
    Aanvaller();

    Aanvaller(string naam);

    virtual ~Aanvaller();


    void schietStatistieken();

    int getAantalGemisteSchoten() const;

    int getTotaalAantalSchoten() const;

    int getAantalGoals() const;
};
#endif //VOETBAL_AANVALLER_H
