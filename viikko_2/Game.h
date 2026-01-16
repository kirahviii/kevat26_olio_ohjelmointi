#pragma once

class Game{
    public:
        Game(int);
        ~Game();
        void play();
    private:
        int playerGuess;
        int randomNumber=0;
        int guessCounter=0;
        int maxNumber;
        void printGameResults();
    
};