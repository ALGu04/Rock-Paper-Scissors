//
//  main.cpp
//  Rock Paper Scissors
//
//  Created by Anyu Gu on 8/4/24.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void output_rules();
void computer_Choice(string & choice);
void user_Choice(string & choice);
int main() {
    string userChoice, computerChoice;
    output_rules();
    user_Choice(userChoice);
    while (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
        cout << "Invalid choice. Please choose again." << endl;
        user_Choice(userChoice);
    }
    cout << "You have chosen " << userChoice << endl;
    computer_Choice(computerChoice);
    cout << "The computer has chosen " << computerChoice << endl;
    if (userChoice == "rock") {
        if (computerChoice == "rock") {
            cout << "The game is tied." << endl;
        }
        else if (computerChoice == "paper") {
            cout << "You lost. Better luck next time." << endl;
        }
        else {
            cout << "You win! Congratulations!" << endl;
        }
    }
    else if (userChoice == "paper") {
        if (computerChoice == "rock") {
            cout << "You win! Congratulations!" << endl;
        }
        else if (computerChoice == "paper") {
            cout << "The game is tied." << endl;
        }
        else {
            cout << "You lost. Better luck next time." << endl;
        }
    }
    else {
        if (computerChoice == "rock") {
            cout << "You lost. Better luck next time." << endl;
        }
        else if (computerChoice == "paper") {
            cout << "You won! Congratulations!" << endl;
        }
        else {
            cout << "The game is tied." << endl;
        }
    }
    return 0;
}
void output_rules() {
    cout << "Welcome to Rock Paper Scissors." << endl
    << "You are playing against a computer." << endl
    << "You can choose rock, paper, or scissors." << endl
    << "Rock crushes scissors, scissors cut paper, and paper covers rock." << endl
    << "Have fun, and good luck!" << endl;
}
void computer_Choice(string & choice) {
    srand((int)time(0));
    int x = rand() % 3;
    if (x == 0) {
        choice = "rock";
    }
    else if (x == 1) {
        choice = "paper";
    }
    else  if (x == 2) {
        choice = "scissors";
    }
}
void user_Choice(string & choice) {
    cout << "Choose rock, paper, or scissors: ";
    getline(cin, choice);
    for (int i = 0; i < choice.length(); i++) {
        choice.at(i) = tolower(choice.at(i));
    }
}
