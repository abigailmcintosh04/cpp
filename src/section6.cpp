#include <iostream>

int main() {

    int x{69};
    int y{17};

    // Using static_cast to convert types.
    // When one operand is floating point, result is floating point division.
    std::cout << "int/int: " << x / y << "\n";
    std::cout << "double/int: " << static_cast<double>(x) / y << "\n";
    std::cout << "int/double: " << x / static_cast<double>(y) << "\n";
    std::cout << "double/double: " << static_cast<double>(x) / static_cast<double>(y) << "\n";

    // Assignment operators can be combined with arithmetic operators.
    y -= 2;

    // Put remainder of x/y into x.
    x %= y;

    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";

    return 0;
}