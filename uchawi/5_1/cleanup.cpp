#include <iostream>
#include <string.h>

using namespace std;

int main() {
    std::cout << "Hello world\n";
    cout << "Hello world 2\n";

    std::string s = "Long sentence\n";
    std::cout << s << "long sentence 2\n";
    int counter = 0;
    while (counter < 10) {
        std::cout << s;
        // counter *= 2;
        // counter = counter * 2;
        counter += 1;
        // counter = counter + 1;
    }
    std::string something;
    std::cin >> something;
    std::cout << something << "\n";

    std::string hello = "Hello world\n";
    std::cout << hello[0] << "\n";

    return 0;
}