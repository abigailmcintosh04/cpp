#include <iostream>

// Cannot nest functions in C++.
void say_hello() { std::cout << "Hello world" << "\n"; }

int get_age() {
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;

    return age;
}

int double_age(int age) { return age * 2; }

// main required to return int, and cannot be called.
int main() {
    say_hello();
    int age{get_age()};
    std::cout << "You are " << age << " years old." << "\n";
    std::cout << "Double your age is: " << double_age(age) << "\n";

    return 0;
}