#include <bitset>
#include <iostream>
#include <string_view>

// string_view allows read-only access to string without copying. Faster.
// Can be initialised with C-style, std::string or std::string_view.
void strview(std::string_view str) { std::cout << "Hello " << str << "\n"; }

int main() {

    // s suffix creates std::string literal.
    using namespace std::string_literals;

    /*
    Can put const before or after type.
    Make variables constant if possible.
    Don't use for value parameters or return values.
    Prefer over object-like macros.
    */
    const double gravity{9.81};

    // constexpr is evaluted at compile time.
    constexpr double electron_charge{-1.602e-19};

    // Different bases.
    int a{0b101010}; // Binary.
    int b{0163};     // Octal. Avoid.
    int c{0x1A3};    // Hexadecimal.

    std::cout << "gravity: " << gravity << "\n";
    std::cout << "electron_charge: " << electron_charge << "\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";

    std::bitset<8> bin1{0b101010};

    std::cout << "a: " << bin1 << "\n";
    std::cout << "b: " << std::oct << b << "\n";
    std::cout << "c: " << std::hex << c << "\n";

    std::string name{"Abi"};
    std::cout << "name: " << name << "\n";
    name = "Sinead";
    std::cout << "name: " << name << "\n";

    std::cout << "What's your name? ";
    std::string user_name{};

    // Use std::getline and std::ws to read input text with whitespace.
    std::getline(std::cin >> std::ws, user_name);

    strview(user_name);

    // Length of string slightly different.
    std::cout << "Length of user_name: "s << std::dec << user_name.length() << " characters.\n"s;

    return 0;
}