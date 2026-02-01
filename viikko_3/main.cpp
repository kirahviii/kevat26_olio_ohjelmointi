#include "chef.h"
#include "italianChef.h"

int main(){
    Chef Jorma("Jorma");
    Jorma.getName();
    Jorma.makeSalad(8);
    Jorma.makeSoup(12);

    ItalianChef Mario("Mario");
    Mario.makeSalad(6);
    Mario.makeSoup(9);
    Mario.askSecret("pizza",12,15);

    return 0;
}


