#include <iostream>
#include "notificator.h"

Notificator::Notificator(){
    cout << "Creating notificator" << endl;
}

void Notificator::add(Follower *addedF){    
    addedF->next = followers; //"lisätään" listaan lisättävä olio(newF) listan "ketjun" alkuun laittamalla newF:n next-pointer osoittamaan alkuun(followers)
    followers = addedF;   //"siirretään" alku(followers) osoittamaan lisättyyn olioon(newF)

    cout << "Notificator added follower: " << addedF->getName() << endl;
}

void Notificator::remove(Follower *removedF){
    cout << "Notificator removed follower " << removedF->getName() << endl;
    Follower *start = followers;

    if(followers == removedF){
        followers = followers->next;
        return;
    }
    while(start != nullptr){
        if(start->next == removedF){
            start->next = removedF->next; 
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