#include <iostream>
#include <cstdlib>
#include <time.h>

using std::cout,std::cin,std::endl;

int game(int maxnum){
    int arvaus = 0;
    int arvaustenLkm = 0;
    srand(time(NULL));
    int arvottu=rand()%maxnum+1;

    while(arvaus!=arvottu){
        cout << "Arvaa numero 1-" << maxnum << endl;
        cin >> arvaus;
        arvaustenLkm++;
        if(arvaus>arvottu){
            cout << "Luku on pienempi kuin arvauksesi" << endl;
        }
        else if(arvaus<arvottu){
            cout << "Luku on suurempi kuin arvauksesi" << endl;
        }
        else{
            cout << "Arvasit oikein! Peli loppuu" << endl;
        }
    }
    return arvaustenLkm;
}

int main()
{
    int maxnum;
    cout << "Anna ylaraja" << endl;
    cin >> maxnum;
    int arvaustenLkm = game(maxnum);
    cout << "Arvausten lkm: " << arvaustenLkm << endl;
    return 0;
}
