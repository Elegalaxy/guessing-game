#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class player
{
public:
    string name;
    int score;
    bool isPlayer;
    player(string name , int score, bool isPlayer);
};



#endif