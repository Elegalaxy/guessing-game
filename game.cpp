#include <iostream>
#include "game.h"

void gameplay(vector<player*>&players , int random ,int chance){
    int input;
    int minimum = 1;
    int maximum = 100;
    int current_player = 0;
    while (chance > 0){
        cout << players[current_player]->name << " enter Number betweeen " << minimum << " - " << maximum << ": ";
        cin >> input;

        //Gameplay
        if (input > random){
            cout << input << " is bigger than answer." << endl;
            maximum = input - 1;
        } 
        else if (input < random){
            cout << input << " is smaller than answer." << endl;
            minimum = input + 1;
        }
        else {
            players[current_player]->score ++;
            return;
        }

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

void gameplay(string n, vector<ai*>&players , int random ,int chance){
    int input;
    int minimum = 1;
    int maximum = 100;
    int current_player = 0;
    while (chance > 0){
        cout << players[current_player]->name << " enter Number betweeen " << minimum << " - " << maximum << ": ";
        cin >> input;

        //Gameplay
        if (input > random){
            cout << input << " is bigger than answer." << endl;
            maximum = input - 1;
        } 
        else if (input < random){
            cout << input << " is smaller than answer." << endl;
            minimum = input + 1;
        }
        else {
            players[current_player]->score ++;
            return;
        }

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
