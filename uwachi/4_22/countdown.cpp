#include <iostream>

int main() {
    int x;
    std::cin >> x;
    while (x > 0) {
        std::cout << x << "\n";
        x = x - 1;
    }
    std::cout << "Blastoff!!\n";
    return 0;
}