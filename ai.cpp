#include <iostream>
#include "ai.h"

ai::ai(string n , int s): player(n, s)
{
    
}

int ai::getScore(int mn, int mx)
{
    int aiscore =rand()%(mx-mn+1)+mn;
    cout << name << " choose " << aiscore << endl;
    return aiscore;
}