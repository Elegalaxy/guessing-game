#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "game.h"
using namespace std;

int main(){
    srand (time(NULL));
    int ans = rand()%100+1;

    cout << "Welcome to guess the number." << endl;
    cout << "Guess the number between 1 to 100 and you have " << endl;

    if(gameplay(ans))
        cout << "You Win!" << endl;
    else
        cout << "You Loss! The answer is: " << ans << endl;

    return 0;
}