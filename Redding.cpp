//
// Created by robbe on 18/11/2019.
//

#include "Redding.h"

Redding::Redding(bool geslaagd) {
    this->redding = geslaagd;
}
Redding::Redding() {}

Redding::~Redding() {

}

bool Redding::isRedding() const {
    return redding;
}
