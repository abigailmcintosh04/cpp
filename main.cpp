#include <iostream>

// All C++ programs must have a main function. 
int main() 
{
    std::string name = "Abi";   // strings require double quotes.
    std::cout << "Hello " << name << std::endl; // std::endl is used to end the line.

    int age{22};     // Protects against narrowing conversions.

    std::cout << "Age: " << age << std::endl;

    return 0;
}

/* This is a 
    multi-line comment. 
    // with a single line comment inside.
*/