/*
Rock-Paper-Scissors!
Asks for user input on choice, then compares against the computer
If you beat the computer, exits, otherwise continues
*/
#include <iostream>
#include <random>
#include <time.h>

int main() {
    // while user hasn't won
    //   get user input
    //   compare against computer calculation
    //   if user wins
    //     print "winner"
    //     break
    //   if user loses (else)
    //     print "try again"
    char inp; // r, p, s
    char comp_choice;
    srand(time(NULL));
    // Game loop
    while (true) {
        std::cout << "Give your character (r, p, s): ";
        std::cin >> inp; // get user input
        int choice = rand() % 3; // make computer choice
        // Turns the random _number_ into a letter
        if (choice == 0) {
            comp_choice = 'p';
        }
        else if (choice == 1) {
            comp_choice = 's';
        }
        else {
            comp_choice = 'r';
        }
        std::cout << "Computer chose " << comp_choice << "\n";

        // Checks to see who won
        if (inp != 'r' && inp != 'p' && inp != 's') {
            std::cout << "Invalid choice\n";
        }
        else if (inp == 'r' && comp_choice == 's') {
            std::cout << "Winner!\n";
            break;
        }
        else if (inp == 'p' && comp_choice == 'r') {
            std::cout << "Winner!\n";
            break;
        }
        else if (inp == 's' && comp_choice == 'p') {
            std::cout << "Winner!\n";
            break;
        }
        else {
            std::cout << "Try again\n";
        }
    }
    return 0;
}