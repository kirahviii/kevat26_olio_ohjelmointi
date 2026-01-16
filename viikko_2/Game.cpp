#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Game.h"

using std::cout,std::cin,std::endl;

Game::Game(int maxNum){
    cout << "Object created with a maximum value of 20" << endl;
    maxNumber=maxNum;
}

Game::~Game(){
    cout << "Object destroyed" << endl;
}

int Game(int maxNum){
    cout << "Give max value" << endl;
    cin >> maxNum;
    return maxNum;
}

void Game::play(){
    srand(time(NULL));
    randomNumber=rand()%maxNumber+1;

    while(playerGuess!=randomNumber){
        cout << "Guess a number 1-" << maxNumber << endl;
        cin >> playerGuess;
        guessCounter++;
        if(playerGuess==randomNumber){
            cout << "Correctahh" << endl;
            printGameResults();
        }   
        else if(playerGuess>randomNumber){
            cout << "The number is smaalah" << endl;
        }
        else{
            cout << "The number is bigah" << endl;
        }
    }
}

void Game::printGameResults(){
    cout << "Random number was: " << randomNumber << endl;
    cout << "Guess counter: " << guessCounter << endl;
}
