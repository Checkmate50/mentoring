#include <iostream>

int main() {
    int x = 5;
    int repeat = 100;
    while (x > 0) {
        std::cout << x << "\n";
        x = x - 1;
        if (x == 0) {
            x = x + 3;
            repeat = repeat - 1;
        }
        if (repeat == 0) {
            break;
        }
    }
    std::cout << "Finished\n";
    // if (x > 0) { // 5
    //     std::cout << x << "\n";
    //     x = x - 1;
    // }

    return 0;
}