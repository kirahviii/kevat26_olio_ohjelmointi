#include <iostream>
#include "follower.h"

Follower::Follower(string n){
    name = n;
    cout << "Creating follower " << name << endl;
}

string Follower::getName(){
    return name;
}

void Follower::update(string message){
    cout << "Follower " << name << " got message: " << message << endl;
}







