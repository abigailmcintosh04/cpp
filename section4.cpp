#include <cstdint>
#include <iomanip>
#include <iostream>

// Integer types
int integers() {

    // 16-bit integer
    short a{32767};
    std::cout << "Size of short: " << sizeof(a) << " bytes" << "\n";

    // 16 (typically 32)-bit integer
    int b{2147483647};
    std::cout << "Size of int: " << sizeof(b) << " bytes" << "\n";

    // 32-bit integer
    long c{2147483647};
    std::cout << "Size of long: " << sizeof(c) << " bytes" << "\n";

    // 64-bit integer
    long long d{9223372036854775807};
    std::cout << "Size of long long: " << sizeof(d) << " bytes" << "\n";

    // signed prefix and int suffix typically not required
    // signed short int e{69};

    // Division of integers results in an integer
    std::cout << "8 / 5 = " << 8 / 5 << "\n";

    // Unsigned integers can only represent positive values
    unsigned short f{65535};
    f = f + 1; // Overflow occurs here, wraps around to 0
    std::cout << "65535 + 1 = " << f << "\n";

    // Can have fixed width integers with the <cstdint> header
    std::int32_t g{65535};
    g = g + 1; // No overflow occurs here, equals 65536
    std::cout << "65535 + 1 = " << g << "\n";

    // 8 bit integers typically treated as characters
    std::int8_t h{67};
    std::cout << "67 is " << h << "\n";

    return 0;
}

// Floating point types
int floats() {

    // 32-bit floating point
    float a{3.14159f};
    std::cout << "Size of float: " << sizeof(a) << " bytes" << "\n";

    // 64-bit floating point
    double b{3.14159};
    std::cout << "Size of double: " << sizeof(b) << " bytes" << "\n";

    // 64, 128 or 256-bit floating point
    long double c{3.14159L};
    std::cout << "Size of long double: " << sizeof(c) << " bytes" << "\n";

    // Scientific notation
    float d{6.7e40f};
    std::cout << "6.7e40f is " << d << "\n"; // Displays inf as breaks range.

    // Floating point precision
    std::cout << std::setprecision(20);
    std::cout << "float: " << 1.0f / 3.0f << "\n";
    std::cout << "double: " << 1.0 / 3.0 << "\n";

    return 0;
}

int booleans() {

    // Default initialisation of false.
    bool a{};

    // Bool size typically one byte.
    std::cout << "Size of bool: " << sizeof(a) << " bytes" << "\n";

    // Can be true or false.
    bool b{true};
    bool c{false};

    std::cout << "b is " << b << "\n";
    std::cout << "c is " << c << "\n";

    std::cout << std::boolalpha; // Display bools as true or false instead of 1 or 0.
    std::cout << "b is " << b << "\n";
    std::cout << "c is " << c << "\n";

    // bool d{4}; // Non-zero values are true. Throws warning.

    // Integer to boolean conversion.
    bool d{};
    std::cout << "Enter a bool: ";

    // Allows user to input true or false instead of 0 or 1.
    std::cin >> std::boolalpha;
    std::cin >> d;

    std::cout << std::boolalpha;
    std::cout << "You entered " << d << "\n";

    return 0;
}

// if-else statements
int if_statements() {

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if (x < 0) {
        std::cout << "Negative\n";
    } else if (x > 0) {
        std::cout << "Positive\n";
    } else {
        std::cout << "Zero\n";
    }

    return 0;
}

int main() {

    integers();
    floats();
    booleans();
    if_statements();

    return 0;
}