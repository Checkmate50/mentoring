#include <iostream>

int main() {

    char x;
    std::cout << "Submit a character for judgement...\n";
    std::cin >> x;

    if (x == 'a' ||
        x == 'e' ||
        x == 'i' ||
        x == 'o' || 
        x == 'u' ||
        x == 'A' ||
        x == 'E' ||
        x == 'I' ||
        x == 'O' ||
        x == 'U' ) {
            std::cout << "Character " << x << " is a vowel!\n";
        }

    else {
        std::cout << "Character " << x << " is not a vowel!\n";
    }

    return 0;
}