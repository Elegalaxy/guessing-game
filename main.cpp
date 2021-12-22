#include <iostream>
#include "GAME_H"
using namespace std;

int main(){
    cout << "Welcome to guess the number." << endl;
    cout << "Guess the number between 1 to 100 and you have " << endl;

    if(gameplay())
        cout << "You Win!" << endl;
    else
        cout << "You Loss!" << endl;

    return 0;
}