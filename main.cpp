#include <iostream>
#include "Loop.h"
#include "Speler.h"
#include "Pas.h"
#include "Keeper.h"
#include "Redding.h"
#include "Aanvaller.h"
#include "Middenvelder.h"
#include "Verdediger.h"

vector<Speler*>spelers;

void voegToe(Speler *pSpeler);

int main() {
    //dynamic cast
    //run time type information

   Speler* a1 = new Aanvaller("E. Hazard");
    Speler* a2= new Aanvaller("Lukaku");
    Speler* a3= new Aanvaller("De Bruynen");
    Speler* m1 = new Middenvelder( "T. Hazard");
    Speler* m2 = new Middenvelder("Tielemans");
    Speler* m3 = new Middenvelder("Witsel");
    Speler* v1 = new Verdediger("Vertonger");
    Speler* v2 = new Verdediger("Vermaelen");
    Speler* v3= new Verdediger("Kompany");
    Speler* k1 = new Keeper("Courtois");
    Speler* k2= new Keeper("Mignolet");
    voegToe(a1);
    voegToe(a2);
    voegToe(a3);
    voegToe(m1);
    voegToe(m2);
    voegToe(m3);
    voegToe(v1);
    voegToe(v2);
    voegToe(v3);
    voegToe(k1);
    voegToe(k2);
    //match
    Loop* loop = new Loop(1);
    for(int i =0; i<spelers.size();i++){
        spelers[i]->addActie(loop);
    }




//    a1.addActie(loop);
//    a1.addActie(pas);
//    Redding * redding = new Redding();
//    k1.addActie(redding);

}

void voegToe(Speler *pSpeler) {
    spelers.push_back(pSpeler);
}
