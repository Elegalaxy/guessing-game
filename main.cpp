#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "player.h"
using namespace std;

int main(){
    srand (time(NULL));
    int ans = rand()%100+1;

    cout << "Welcome to guess the number." << endl;
    cout << "Guess the number between 1 to 100 and you have 7 chances" << endl;

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



    if(gameplay(ans))
        cout << "You Win!" << endl;
    else
        cout << "You Loss! The answer is: " << ans << endl;

    return 0;
}