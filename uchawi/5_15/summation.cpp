//Calculate the summation of a number from 0 to n
//Given 3 -- 3 + 2 + 1 = 6, Given 5 -- 5 + 4 + 3 + 2 + 1 = 15
// test summation is 6 which is 6 + 5 + 4 + 3 + 2 + 1 = 21
//Mission considered failed

#include <iostream>

int main () {

    int sum = 0, x;
    std::cout << "Insert a number for summation: \n";
    std::cin >> x;

    while (x > 0) {
        sum += x;
        std::cout << x << " " << sum << "\n";
        x = x - 1;
    }

      std::cout << "The summation is : " << sum;

    return 0;
}