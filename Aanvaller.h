//
// Created by robbe on 18/11/2019.
//

#ifndef VOETBAL_AANVALLER_H
#define VOETBAL_AANVALLER_H

#include <bits/basic_string.h>
#include "Speler.h"

class Aanvaller: public Speler{
public:
    Aanvaller();

    Aanvaller(std::basic_string<char> naam);

    virtual ~Aanvaller();



};
#endif //VOETBAL_AANVALLER_H
