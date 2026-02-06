#pragma once
#include <iostream>
#include "follower.h"

using std::string, std::cout;

class Notificator{ 
    public:
        Notificator();
        void add(Follower* f);
        void remove(Follower* f);
        void printFollowers();
        void post(string m);
    private:
        Follower *followers = nullptr; //listan alkuosoitin
};