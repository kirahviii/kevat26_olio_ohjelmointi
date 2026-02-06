#include <iostream>
#include "notificator.h"

Notificator::Notificator(){
    cout << "Creating notificator" << endl;
}

void Notificator::add(Follower *newF){    

    newF->next = followers; //"lisätään" listaan lisättävä olio(newF) listan "ketjun" alkuun laittamalla newF:n next-pointer osoittamaan alkuun(followers)
    followers = newF;   //"siirretään" alku(followers) osoittamaan lisättyyn olioon(newF)

    cout << "Notificator added follower: " << newF->getName() << endl;
}

void Notificator::remove(Follower *removedF){

    Follower *start = followers;

    if(start == removedF){
        start = start->next;
        return;
    }
    while(start != nullptr){
        if(start->next == removedF){
            start->next = removedF->next; 
            cout << "Notificator removed follower " << removedF->getName() << endl;
            return;
        }
        else{
            start = start->next;
        }
    }
}

void Notificator::printFollowers(){
    cout << "Follower list: " << endl;
    Follower *start = followers;
    while(start != nullptr){
        cout << start->getName() << endl;  
        start = start->next;
    }
}

void Notificator::post(string m){
    cout << "Notificator posting message: " << m << endl;
    Follower *start = followers;
    while(start != nullptr){
        start->update(m); 
        start = start->next;
    }
}








