#include <iostream>
#include "Loop.h"
#include "Speler.h"
#include "Pas.h"
#include "Keeper.h"
#include "Redding.h"
#include "Aanvaller.h"
#include "Middenvelder.h"
#include "Verdediger.h"
#include "Team.h"
#include "Schiet.h"
#include "Takle.h"


vector<Speler*>spelers;

void voegToe(Speler *pSpeler);

int main() {
    //acties
    Loop* loopVer = new Loop(true);//1Km
    Loop* loopKort = new Loop(false);//500m

    Pas* goedePas = new Pas(true);
    Pas* slechtePas = new Pas(false);

    Schiet* scoord = new Schiet(true);
    Schiet* mist = new Schiet(false);

    Takle * goedeTakle = new Takle(true);
    Takle * slechteTakle = new Takle(false);

    Redding* redding = new Redding(true);
    Redding* tegenPunt = new Redding(false);

    //spelers
   Speler* a1 = new Aanvaller("E. Hazard");
    Speler* a2= new Aanvaller("Lukaku");
    Speler* a3= new Aanvaller("De Bruynen");

    Speler* m1 = new Middenvelder( "T. Hazard");
    Speler* m2 = new Middenvelder("Tielemans");
    Speler* m3 = new Middenvelder("Witsel");

    Speler* v1 = new Verdediger("Vertongen");
    Speler* v2 = new Verdediger("Vermaelen");
    Speler* v3= new Verdediger("Kompany");

    Speler* k1 = new Keeper("Courtois");
    Speler* k2= new Keeper("Mignolet");

    //team
    Team* team = new Team("The Red Devils");
    team->voegToe(a1);
    team->voegToe(a2);
    team->voegToe(a3);
    team->voegToe(m1);
    team->voegToe(m2);
    team->voegToe(m3);
    team->voegToe(v1);
    team->voegToe(v2);
    team->voegToe(v3);
    team->voegToe(k1);
    team->voegToe(k2);

    //match
    a1->addActie(loopVer);
    a1->addActie(mist);
    a1->addActie(loopVer);
    a2->addActie(loopKort);
    a2->addActie(loopKort);
    a2->addActie(loopKort);
    a2->addActie(scoord);
    a3->addActie(scoord);
    a3->addActie(mist);
    a3->addActie(loopKort);

    m1->addActie(loopVer);
    m1->addActie(loopKort);
    m1->addActie(loopKort);
    m1->addActie(loopKort);
    m1->addActie(goedePas);
    m1->addActie(goedePas);
    m1->addActie(slechtePas);
    m2->addActie(loopVer);
    m2->addActie(loopVer);
    m2->addActie(loopVer);
    m2->addActie(goedePas);
    m2->addActie(goedePas);
    m3->addActie(loopKort);
    m3->addActie(loopKort);
    m3->addActie(loopKort);
    m3->addActie(loopKort);
    m3->addActie(goedePas);
    m3->addActie(goedePas);
    m3->addActie(goedePas);
    m3->addActie(slechtePas);
    m3->addActie(slechtePas);

    v1->addActie(loopKort);
    v1->addActie(loopKort);
    v1->addActie(loopKort);
    v1->addActie(loopKort);
    v1->addActie(slechteTakle);
    v1->addActie(goedeTakle);
    v2->addActie(loopVer);
    v2->addActie(loopVer);
    v2->addActie(goedeTakle);
    v2->addActie(slechteTakle);
    v2->addActie(goedeTakle);
    v3->addActie(loopKort);
    v3->addActie(loopVer);
    v3->addActie(goedeTakle);

    k1->addActie(redding);
    k1->addActie(redding);
    k1->addActie(loopKort);
    k2->addActie(loopVer);
    k2->addActie(loopKort);
    k2->addActie(tegenPunt);
    k2->addActie(redding);

    //statestieken

    team->schrijfSpelers();

    //selecteren van spelers






//    a1.addActie(loop);
//    a1.addActie(pasStatistieken);
//    Redding * reddingStatistiek = new Redding();
//    k1.addActie(reddingStatistiek);

}


