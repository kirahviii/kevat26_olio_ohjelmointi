#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Game.h"

int main(){
    int maxNum=20;
    Game game(maxNum);      //luodaan game-niminen olio
    game.play();        //kerrotaan oliolle että ajaa play funtion
    return 0;
}