#include <iostream>

// Cannot nest functions in C++.
void say_hello() { std::cout << "Hello world" << "\n"; }

int main() {
    say_hello();
    return 0;
}