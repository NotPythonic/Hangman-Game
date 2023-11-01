#include <iostream>
#include <limits.h>
#include <cctype>
using namespace std;


void display(string rightGuesses, short int hearts){
    if(hearts == 6){
        system("cls");
        cout << " ___   hearts: " << hearts << endl << " |   " << endl <<
        " O  " << endl << "/|\\   " << rightGuesses << endl << "/ \\" << endl << endl;
    } else if(hearts == 5){
        system("cls");
        cout << " ___   hearts: " << hearts << endl << " |   " << endl <<
        " O  " << endl << "/|\\   " << rightGuesses << endl << "/ " << endl << endl;
    } else if(hearts == 4){
        system("cls");
        cout << " ___   hearts: " << hearts << endl << " |   " << endl <<
        " O  " << endl << "/|\\   " << rightGuesses << endl << " " << endl << endl;
    } else if(hearts == 3){
        system("cls");
        cout << " ___   hearts: " << hearts << endl << " |   " << endl <<
        " O  " << endl << "/|   " << rightGuesses << endl << " " << endl << endl;
    } else if(hearts == 2){
        system("cls");
        cout << " ___   hearts: " << hearts << endl << " |   " << endl <<
        " O  " << endl << " |   " << rightGuesses << endl << " " << endl << endl;
    } else if(hearts == 1){
        system("cls");
        cout << " ___   hearts: " << hearts << endl << " |   " << endl <<
        " O  " << endl << "     " << rightGuesses << endl << " " << endl << endl;
    } else if(hearts == 0){
        system("cls");
        cout << " ___   hearts: " << hearts << endl << " |   " << endl <<
        "   " << endl << "     " << rightGuesses << endl << " " << endl << endl;
    }
    
}

void rightsChecker(string name, string &rightGuesses, char theGuess,short int &hearts){
    for(short int i = 0; i != name.size(); i++){
        if(tolower(name.at(i)) == tolower(theGuess)){
            rightGuesses.at(i) = name.at(i);
            return;
        }
    }
    hearts--;
}