#include <iostream>

struct Big {
    int data[10000];
};

int double_first(Big &b) { return b.data[0] * 2; }

int main() {
    int a{5};
    int &b{a};       // b is a reference to a
    const int &c{a}; // c is a const reference to a (read-only)

    a = 9;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

    b = 10;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

    Big big;
    int big_doubled{double_first(big)};
    std::cout << big_doubled << std::endl;

    return 0;
}