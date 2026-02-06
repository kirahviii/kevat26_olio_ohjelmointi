#include "follower.h"
#include "notificator.h"

int main(){
    Notificator *No = new Notificator();

    Follower *P = new Follower("Pikkumyy"); //creates an object using a pointer
    Follower *N = new Follower("Nipsu");       
    Follower *H = new Follower("Hattiwatti");

    No->add(P);
    No->add(N);
    No->add(H);

    No->printFollowers();

    No->post("Henlo muumit");

    No->remove(N);
    No->remove(H);

    No->printFollowers();

    No->post("Onko kaikki muumit laaksossa?");

    delete P;
    delete N;
    delete H;
    delete No;
    return 0;
}