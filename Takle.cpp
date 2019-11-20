//
// Created by robbe on 18/11/2019.
//

#include "Takle.h"

Takle::Takle(bool geslaagd) {
    if(geslaagd){aantalGoedeTackles++;}
    else{aantalSlechteTakles++;}
}

Takle::~Takle() {

}

int Takle::getAantalGoedeTackles() const {
    return aantalGoedeTackles;
}

int Takle::getAantalSlechteTakles() const {
    return aantalSlechteTakles;
}
