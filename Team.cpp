//
// Created by robbe on 22/11/2019.
//

#include "Team.h"
#include "Speler.h"
#include "Aanvaller.h"
#include "Middenvelder.h"
#include "Verdediger.h"
#include "Keeper.h"
#include <cmath>

Team::Team(string naam) {
    this->naam = naam;
}

Team::~Team() {

}
void Team::voegToe(Speler *pSpeler) {
    spelers.push_back(pSpeler);
}

const vector<Speler*>& Team::getSpelers() const{
return spelers;
}

void Team::schrijfSpelers(){

    for(vector<Speler *>::iterator it = spelers.begin();it != spelers.end();++it){
        Speler* speler = *it;
        cout<<"speler: "<<speler->getNaam()<<" aantal km Gelopen "<<speler->loop()<<endl;
        Aanvaller* aanvaller = dynamic_cast<Aanvaller*>(*it);
        Verdediger* verdediger = dynamic_cast<Verdediger*>(*it);
        Middenvelder* middenvelder = dynamic_cast<Middenvelder*>(*it);
        Keeper* keeper = dynamic_cast<Keeper*>(*it);

        if(aanvaller != NULL){
           int punten;
           aanvaller->schietStatistieken();
           punten = aanvaller->getAantalGoals()*this->geslaagdeActie;
           punten -= aanvaller->getAantalGemisteSchoten()*this->gefaaldeActie;
           punten += (int)round(aanvaller->loop()/0.5);
           if(punten < 0){punten = 0;}
           cout << "type aanvaller met " << aanvaller->getTotaalAantalSchoten() << " totaal aantal schoten waarvan "
                << aanvaller->getAantalGemisteSchoten() << " gemisten schoten en " << aanvaller->getAantalGoals()<<" Goals "<<endl;
        }
    }
}

