#include <iostream>

int main() {
    char input;
    int y, x;
    std::cout << "Lets play Tic Tac Toe! Choose:  X or O\n";
    // std::cin >> input;

    // What I need: To create a three row and column field for the game dimensions.
    // Ask how to make a grid with y/x coordinants.
    //Hypothesis; I could have a "While" loop to keep the shape of the field and use "If" statements for each turn for the computer and user.
    //(cont) I need to have the computer make coordinate imputs until either the computer or the user makes three chars in a row. 
    //The lowest priority will probably be the imputs of the comp. and user so that will be above the [Field While loop].
    //Ask if I should study For-loops for the project.
    // std::cin >> y >> x;

    char b11 = ' ', b12 = ' ', b13 = ' ', b21 = ' ', b22 = ' ', b23 = ' ', b31 = ' ', b32 = ' ', b33 = ' ';

    std::cout << b11 << '|' << b12 << '|' << b13 << '\n';
    std::cout << "-----\n";
    std::cout << b21 << '|' << b22 << '|' << b23 << '\n';
    std::cout << "-----\n";
    std::cout << b31 << '|' << b32 << '|' << b33 << '\n' << '\n';

    b22 = 'X';

    std::cout << b11 << '|' << b12 << '|' << b13 << '\n';
    std::cout << "-----\n";
    std::cout << b21 << '|' << b22 << '|' << b23 << '\n';
    std::cout << "-----\n";
    std::cout << b31 << '|' << b32 << '|' << b33 << '\n' << '\n';

    return 0;
}