#include <iostream>
#include "game.h"

void gameplay(vector<player*>&players , int random ,int chance){
    int minimum = 1;
    int maximum = 100;
    int current_player = 0;
    while (chance > 0){

        int answer = players[current_player]->getScore(minimum,maximum);

        //Gameplay
        if (answer > random){
            cout << answer << " is bigger than answer." << endl;
            maximum = answer - 1;
        } 
        else if (answer < random){
            cout << answer << " is smaller than answer." << endl;
            minimum = answer + 1;
        }
        else {
            players[current_player]->score ++;
            return;
        }
        cout << endl;


        //Player Choice
        if (current_player == players.size() - 1){
            current_player = 0;
        }
        else{
            current_player ++;
        }
        chance --;
    }
}