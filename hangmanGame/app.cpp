#include <iostream>
#include <limits.h>
#include "myheader.hpp"
using namespace std;

int main() {
    short int hearts = 6;
    const string name = "CS";
    string rightGuesses = "__"; 

    while(hearts != 0){
        display(rightGuesses, hearts); char guess;
        cout << "Enter your guess: "; cin >> guess;

        
        rightsChecker(name, rightGuesses, guess, hearts);

        if(hearts <= 0){
            break;
        } else if(name == rightGuesses){
            display(rightGuesses, hearts);
            cout << endl << "You did it! you saved him." << endl;
            return 0;
        }
    }
    display(rightGuesses, hearts);
    cout << endl << "You lost! He died" << endl;
}