#include <iostream>

int main() {

    /*
    Can put const before or after type.
    Make variables constant if possible.
    Don't use for value parameters or return values.
    Prefer over object-like macros.
    */
    const double gravity{9.81};

    // Different bases.
    int a{0b101010}; // Binary.
    int b{0163};     // Octal. Avoid.
    int c{0x1A3};    // Hexadecimal.

    std::cout << "gravity: " << gravity << "\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";

    return 0;
}