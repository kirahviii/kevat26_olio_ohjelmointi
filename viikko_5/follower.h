#pragma once
#include <iostream>

using std::string, std::cout, std::endl;

class Follower{
    public:
        Follower *next = nullptr;   //pointer named next, datatype of Follower
        Follower(string n);
        Follower(){};
        string getName();
        void update(string);
    private:
        string name;
};