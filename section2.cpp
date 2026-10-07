#include <iostream>

// Macros can be used to define constants. Tend to avoid.
#define E 2.71828

/* using namespace std; // Not recommended. */

// Forward declaration of function in second_file.cpp
int double_age(int age);

// Cannot nest functions in C++.
void say_hello() { std::cout << "Hello world" << "\n"; }

int get_age() {
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;

    return age;
}

// main required to return int, and cannot be called.
int main() {
    say_hello();
    int age{get_age()};
    std::cout << "You are " << age << " years old." << "\n";
    std::cout << "Double your age is: " << double_age(age) << "\n";

    // Can use preprocessor directives to conditionally compile code.
#if 0
    std::cout << "Value of E is: " << E << "\n";
#endif

    return 0;
}
