//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_SCHIET_H
#define VOETBAL_SCHIET_H


#include "Actie.h"

class Schiet : public Actie{
private:
    Schiet();
    bool gescoord;
public:
    Schiet(bool gescoord);
    void schietOpDoel();
    void schietMis();
    void schietEnScoort();
    virtual ~Schiet();

    int getAantalSchotenOpDoel() const;

    int getAantalSchoten() const;

    int getGoals() const;

    bool isGescoord() const;
};


#endif //VOETBAL_SCHIET_H
