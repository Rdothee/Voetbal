//
// Created by robbe on 18/11/2019.
//

#include "Pas.h"

Pas::Pas(bool geslaagd) {
    this->goedePas=geslaagd;
}

Pas::~Pas() {

}

bool Pas::isGoedePas() const {
    return goedePas;
}
