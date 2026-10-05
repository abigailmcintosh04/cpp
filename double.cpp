#include <iostream>

int main() {
    std::cout << "Enter a number: ";

    int x{};
    std::cin >> x;

    x = x * 2;

    std::cout << "Double of the number is: " << x << "\n";

    return 0;
}