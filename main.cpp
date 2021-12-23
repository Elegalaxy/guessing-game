#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h> 
#include "game.h"
#include "player.h"
using namespace std;

int main(){
    srand (time(NULL));
    int ans = rand()%100+1;

    cout << "Welcome to guess the number." << endl;
    

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
    string champ = "";
    int mx = 0;
    for(player* i:players){
        if(i->score > mx){
            mx = i->score;
            champ = i->name;
        }
    }

    if(mx != 0)
        cout << "The champion is " << champ << " with the score of " << mx << " !" << endl;
    else
        cout << "Everyone sucks, answer is: " << ans << endl;

    return 0;
}