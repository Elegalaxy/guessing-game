#ifndef AI_H
#define AI_H
#include "player.h"

class ai: player
{

public:
    ai(string name , int score);
    int getScore(int mn, int mx);
};



#endif