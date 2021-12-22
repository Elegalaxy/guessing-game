#include <iostream>
using namespace std;

bool gameplay(int random){
    int chance = 6;
    int input;
    while (chance > 0){
        cout << "Enter Number betweeen 1-100: ";
        cin >> input;
        if (input > random){
            cout << input << " is bigger than answer." << endl;
        } 
        else if (input < random){
            cout << input << " is smaller than answer." << endl;
        }
        else {
            return true;
        }
        chance --;
    }
    return false;
}
