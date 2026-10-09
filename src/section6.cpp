#include <cmath>
#include <iostream>

bool is_even(int num) { return num % 2 == 0; }

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

    // Parameters and return value are doubles.
    double z{std::pow(3.0, 3.0)};
    std::cout << "z: " << z << "\n";

    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;

    if (is_even(num)) {
        std::cout << num << " is even.\n";
    } else {
        std::cout << num << " is odd.\n";
    }

    // Prefix vs postfix increment operators.
    // Prefix: increments operand, expression evaluates operand. Tend to prefer.
    int a{5};
    int b{++a};

    // Postfix: copy made of operand, operant is incremented, copy evaluated.
    int c{5};
    int d{c++};

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";
    std::cout << "d: " << d << "\n";

    return 0;
}