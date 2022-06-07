//Given a number, while the number is greater than 10,do the following: 
//if the number is greater than 20, divide it by 4, while if the number is between 10 and 20, multiply it by 3.  Print the result (when the number is less than or equal to 10)!
//Sun May 22 2022
#include <iostream>

int main() {
    int x;
    std::cout << "Give a number for Calculation: \n";
    std::cin >> x;

    if(x <= 10) {
        //std::cout << x << " Is the final calculation!\n";
    }
    
    while(x > 10 && 
        x  < 20) {
        
        x = x * 3;
        break;
    }

    if(x > 20) {
        x = x / 4;
        //std::cout << x << " Is the final calculation!\n";
     }

    // while (x > 10) {
    //     if (x <= 20) {
    //         x = x * 3;
    //     }
    //     else {
    //         x = x / 4;
    //     }
    //     std::cout << x << " is the intermediate result\n";
    // }

    std::cout << x << " Is the final calculation!\n";

    return 0;
}