#include <iostream> 


//Have the user input a character -- if it's in `a-f` it's a "good character" and tell them such.  Otherwise, it's "bad"

int main() {
//Print out a sentence prompt.
    char x;
    std::cout << "Submit a character for judgement\n";
    std::cin >> x;

// Determine if Character is good or bad.
    if (x >= 'a' && x <= 'f') {
        std::cout << x << " is a Good character!\n";
    }
    else if (x >= 'A' && x <= 'F') {
        std::cout << x << " is a Good character!\n";
    }

    else {
        std::cout << x << " is a Bad character!\n";
    }
    return 0;
}