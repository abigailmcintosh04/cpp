#include <iostream>

int main() {
    std::cout << "Enter a number: ";

    int x{};
    std::cin >> x;

    // Value of x not altered.
    std::cout << "Double of the number is: " << x * 2 << "\n";

    return 0;
}