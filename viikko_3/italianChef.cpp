#include "italianChef.h"

ItalianChef::ItalianChef(string name){     //contsructor
    chefName=name;
    cout<<"Italian chef "<<chefName<<" constructor"<<endl;
}

ItalianChef::~ItalianChef(){     //destructor
    cout<<"Italian chef "<<chefName<<" destructor"<<endl;
}

bool ItalianChef::askSecret(string password,int f,int w){
    water=w;
    flour=f;
    if((password.compare("pizza"))==0){
        makePizza();
        return true;
    }
    return false;
}

int ItalianChef::makePizza(){
    int pizza=min(water,flour)/5;

    cout<<"Italian chef "<<chefName<<" can make "<<pizza<<" pizza(s) with "
    <<flour<<" flour and "<<water<<" water"<<endl;

    return pizza;
}

