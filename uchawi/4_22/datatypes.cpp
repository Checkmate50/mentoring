#include <iostream>

int main() {
    int x = 5.60;
    std::cout << x << "\n";
    double d = 3.14;
    std::cout << d << "\n";
    char c = 'a';
    if (c == 'a') {
        std::cout << "True\n";
    }
    bool b = 1 < 5;
    if (b) {
        std::cout << !b;
    }

    return 0;
}