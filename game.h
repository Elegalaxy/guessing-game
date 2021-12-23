#ifndef GAME_H
#define GAME_H
#include <vector>
#include "ai.h"
using namespace std;

void gameplay(vector<player*>&players , int random , int chance);
void gameplay(string n, vector<ai*>&players , int random , int chance);

#endif