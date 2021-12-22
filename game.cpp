#include <iostream>
using namespace std;

bool gameplay(int random){
    int chance = 7;
    int input;
    int minimum = 1;
    int maximum = 100;
    while (chance > 0){
        cout << "Enter Number betweeen " << minimum << " - " << maximum << ": ";
        cin >> input;
        if (input > random){
            cout << input << " is bigger than answer." << endl;
            maximum = input - 1;
        } 
        else if (input < random){
            cout << input << " is smaller than answer." << endl;
            minimum = input + 1;
        }
        else {
            return true;
        }
        chance --;
    }
    return false;
}
