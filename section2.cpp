#include <iostream>

// Cannot nest functions in C++.
void say_hello() { std::cout << "Hello world" << "\n"; }

int get_age() {
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;

    return age;
}
int main() {
    say_hello();
    int age = get_age();
    std::cout << "You are " << age << " years old." << "\n";

    return 0;
}