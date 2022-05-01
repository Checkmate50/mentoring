#include <iostream>

int main() {

    int x;
    std::cout << "Find the Absolute Value of...\n";
    std::cin >> x;
    int abs = x;
    if (x <= -1){
        abs = x * -1;
    }
    std::cout << abs << " is the absolute value of " << x;
    return 0;
}