#include <iostream>
#include "ai.h"

ai::ai(string n , int s): player(n, s)
{
    
}

int ai::getScore(int mn, int mx)
{
    return rand()%mx+mn;
}