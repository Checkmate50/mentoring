#include <iostream>
#include <random>
#include <time.h>

int main() {
 
    int inp;
    srand(time(NULL));
    int choice = rand() % 11;
    while (true) {
        std::cout << "I chose a number, 10 or under, Choose wisely or else you blunder \n";
        std::cin >> inp;
        
        if(inp != choice) {
            std::cout << "A Blunder! Try another number . . . \n";
        }
        else if(inp == choice) {
            std::cout << "A Wonder! I indeed guessed the " << choice << " number!\n";
            break;
        }
    }
    return 0;
}