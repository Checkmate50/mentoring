//Given a number, do one of the following:
//if number < 10, print it as-is
//if number < 50, print it's double instead
//otherwise, print it's negative
// Mission Objective? Works but not as intended...

#include<iostream>

int main() {
int x;
std::cout << "Give a number: \n";
std::cin >> x;

if(x < 10) {
        std::cout << "Your final number is . . . " << x << "!\n";
}

else if(x < 50) {
    std::cout << "Your final number is . . . " << x * 2 << "!\n";
}

else {
    x = x * -1;
    std::cout << "Your final number is . . . " << x << "!\n";
}

    return 0;
}