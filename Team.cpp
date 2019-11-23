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
        int punten = speler->getAantalPunten();
        punten += (int)round((speler->loop()/0.5));
        Aanvaller* aanvaller = dynamic_cast<Aanvaller*>(*it);
        Verdediger* verdediger = dynamic_cast<Verdediger*>(*it);
        Middenvelder* middenvelder = dynamic_cast<Middenvelder*>(*it);
        Keeper* keeper = dynamic_cast<Keeper*>(*it);
        if(aanvaller != NULL){
           aanvaller->schietStatistieken();
           punten += aanvaller->getAantalGoals()*this->geslaagdeActie;
           punten -= aanvaller->getAantalGemisteSchoten()*this->gefaaldeActie;
           cout << "type aanvaller met " << aanvaller->getTotaalAantalSchoten() << " totaal aantal schoten waarvan "
                << aanvaller->getAantalGemisteSchoten() << " gemisten schoten en " << aanvaller->getAantalGoals()<<" Goals "<<endl;

        }else  if( middenvelder != NULL){
            middenvelder->pasStatistieken();
            punten += middenvelder->getAantalGeslaagdePasses()*this->geslaagdeActie;
            punten -= middenvelder->getAantalSlechtePasses()*this->gefaaldeActie;
            cout << "type middenvelder met " << middenvelder->getTotaalAantalPasses() << " totaal aantal passes waarvan "
                 << middenvelder->getAantalSlechtePasses() << " slechte passes en " << middenvelder->getAantalGeslaagdePasses()<<" goede passes "<<endl;

        }else if(verdediger !=NULL){
            verdediger->tackleStatistiek();
            punten += verdediger->getAantalGeslaagdeTakles()*this->geslaagdeActie;
            punten -= verdediger->getAantalGefaaldeTakles()*this->gefaaldeActie;
            cout << "type verdediger met " << verdediger->getTotaalAantalTakles() << " totaal aantal takles waarvan "
                 << verdediger->getAantalGefaaldeTakles() << " slechte takles en " << verdediger->getAantalGeslaagdeTakles()<<" goede takles "<<endl;

        }else if (keeper != NULL){
            keeper->reddingStatistiek();
            punten += keeper->getAantalReddingen()*this->geslaagdeActie;
            punten -= keeper->getAantalTegenGoals()*this->gefaaldeActie;
            cout << "type keeper die " << keeper->getAantalReddingen() << " redding(en) deed en "
                 << keeper->getAantalTegenGoals() << " goals binnen gelaten "<<endl;
        }
        if(punten < 0){punten = 0;}
        cout<<" aantal punten: "<<punten<<endl<<endl;
        speler->setAantalPunten(punten);
    }
}

