#include <iostream>

int main() {
    int x;
    std::cout << "Give a number . . .\n";
    std::cin >> x;
    int current = x;
    if(x >= 1) {
        while (current >= 1) {
            std::cout << x << "\n";
            x = x * current;
            current = current - 1;
        }
    }
     std::cout << x;

    return 0;
}