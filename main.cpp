#include <iostream>
#include "Loop.h"
#include "Speler.h"
#include "Pas.h"
#include "Keeper.h"
#include "Redding.h"

int main() {
    //dynamic cast
    //runt type information

    Loop *loop = new Loop();
    Pas * pas = new Pas();
    Speler s1("eden");
    s1.addActie(loop);
    s1.addActie(pas);

    Keeper k1("courth");
    Redding * redding = new Redding();
    k1.addActie(redding);
    Loop
}