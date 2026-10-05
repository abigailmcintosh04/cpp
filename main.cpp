#include <iostream>

// All C++ programs must have a main function.
int main() {
    std::string name = "Abi";  // strings require double quotes.
    std::cout << "Hello " << name
              << std::endl;  // std::endl is used to end the line.

    int age{22};  // Protects against narrowing conversions.

    std::cout << "Age: " << age << '\n';  // '\n' a lot faster than std::endl.

    [[maybe_unused]] double pi{3.14159};

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered: " << x << "\n";

    std::cout << 3 + 4 * 8 - (5 + 2)
              << "\n";  // C++ follows order of operations.

    return 0;
}

/* This is a
    multi-line comment.
    // with a single line comment inside.
*/