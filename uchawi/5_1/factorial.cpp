#include <iostream>

int main() {
    int x;
    std::cout << "Factorial of what number:\n";
    std::cin >> x;
    int current = x;
    while (current > 1) {
        current = current - 1;
        x = x * current;
    }
    std::cout << x << "\n";
    return 0;
}