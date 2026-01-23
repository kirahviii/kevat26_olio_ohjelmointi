#pragma once
#include <iostream>
#include <string>

using std::cout,std::endl,std::min,std::max,std::string;

class Chef{     //parent class
    public:
        Chef(string);     //constructor
        ~Chef();        //destructor
        Chef(){};
        string getName();
        int makeSalad(int);
        int makeSoup(int);
    protected:
        string chefName;        //gets inherited
};
