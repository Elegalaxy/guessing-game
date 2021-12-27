#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class player
{
public:
    string name;
    int score;
    player(string name , int score);
    virtual int getScore(int mn, int mx);
};



#endif