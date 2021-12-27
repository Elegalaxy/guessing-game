#include <iostream>
#include "player.h"

player::player(string n , int s)
{
    name = n;
    score = s;
}

int player :: getScore(int mn, int mx){
    int input;
    cout << name << " enter Number betweeen " << mn << " - " << mx << ": ";
    cin >> input;
    return input;
}