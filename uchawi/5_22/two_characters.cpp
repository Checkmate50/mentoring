#include <iostream>
//Sun May 22 2022

int main() {

char x, y;
std::cout << "Give two lowercase characters\n";
std::cin >> x >> y;

    if( x < y) {
        std::cout << x << " Comes before \n" << y;
    }

    else if(x == y){
    std::cout << x << " and " << y << " are the same character!\n";
    }
    else {
    std::cout << y << " Comes before \n" << x;
    }
    return 0;
}