#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include "chef.h"

using std::cout,std::endl,std::min,std::max,std::string;


Chef::Chef(string name){        //constructor
    chefName=name;
    cout<<"Chef "<<chefName<<" constructor"<<endl;         
}

Chef::~Chef(){      //destructor
    cout<<"Chef "<<chefName<<" destructor"<<endl;
}

string Chef::getName(){
    return chefName;
}


int Chef::makeSalad(int ingredients){
    int salad=ingredients/5;
    cout<<"Chef "<<chefName<<" can make "<<salad<<" serving(s) of salad with "
    <<ingredients<<" ingredients"<<endl;
    return salad;
}

int Chef::makeSoup(int ingredients){
    int soup=ingredients/3;
    cout<<"Chef "<<chefName<<" can make "<<soup<<" serving(s) of soup with "
    <<ingredients<<" ingredients"<<endl;
    return soup;
}






