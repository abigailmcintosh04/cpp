#include <iostream>

int main() {

    // Integer types

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
    std::cout << 8 / 5 << "\n";

    // Unsigned integers can only represent positive values.
    unsigned short f{65535};
    std::cout << f << "\n";
    std::cout << f + 1 << "\n";

    return 0;
}