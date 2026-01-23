#pragma once
#include <string>
#include <iostream>
#include "chef.h"

using std::cout,std::endl,std::min,std::max,std::string;

class ItalianChef: public Chef{     //child class
    public:
        ItalianChef(string);
        ~ItalianChef();
        bool askSecret(string,int,int);
    private:
        string password="pizza";
        int makePizza();
        int flour;
        int water;
};