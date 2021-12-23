#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h> 
#include "game.h"
#include "player.h"
using namespace std;

pair <vector<player*>,int >singleplayer(){
    
}

pair <vector<player*>,int >multiplayer(){
    int ans = rand()%100+1;

    vector<player*> players;
    int num;
    cout << "How many players are there? ";
    cin >> num;

    for(int i = 0; i < num; i++){
        string n;
        cout << "Name of player " << i+1 << " is: ";
        cin >> n;
        player* temp = new player(n, 0);
        players.push_back(temp);
    }

    int chance = ceil(7.0/(float)num)*num;

   cout << endl <<"Guess the number between 1 to 100 and you have total of "<< chance << " chances" << endl;
    gameplay(players, ans , chance);
    return {players,ans};
}



int main(){
    srand (time(NULL));

    cout << "Welcome to Guess The Number." << endl;
    int choice = 1;
    pair <vector<player*>,int> players;
    while(choice != 3){
        cout << "(1)Singleplayer" << endl;
        cout << "(2)Multiplayer" << endl;
        cout << "(3)Quit" << endl;
        cin >> choice;
        
        if(choice == 1)
            players = singleplayer();
        else if (choice == 2)
            players = multiplayer();
        
        if (choice == 1 || choice == 2){
            string champ = "";
            int mx = 0;
            for(player* i:players.first){
                if(i->score > mx){
                    mx = i->score;
                    champ = i->name;
                }
            }

            if(mx != 0)
                cout << "The champion is " << champ << " with the score of " << mx << " !" << endl;
            else
                cout << "Everyone sucks, answer is: " << players.second << endl;

                
        }
    }
    return 0;
}