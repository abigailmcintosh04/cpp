#include <cmath>
#include <iostream>

bool is_even(int num) { return num % 2 == 0; }

// Using static_cast to convert types.
void static_cast_ex(int x, int y) {

    // When one operand is floating point, result is floating point division.
    std::cout << "int/int: " << x / y << "\n";
    std::cout << "double/int: " << static_cast<double>(x) / y << "\n";
    std::cout << "int/double: " << x / static_cast<double>(y) << "\n";
    std::cout << "double/double: " << static_cast<double>(x) / static_cast<double>(y) << "\n";
}

void assignment_operators(int x, int y) {
    // Assignment operators can be combined with arithmetic operators.
    y -= 2;

    // Put remainder of x/y into x.
    x %= y;

    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
}

void exponentiation(double x, double y) {
    // Exponentiation.
    double z{std::pow(x, y)};
    std::cout << x << " to the power of " << y << " is " << z << "\n";
}

// Prefix vs postfix increment operators.
void prepostfix(int a) {

    std::cout << "a: " << a << "\n";
    int b{a};

    // Prefix: increments operand, expression evaluates operand. Tend to prefer.
    int c{++a};

    // Postfix: copy made of operand, operant is incremented, copy evaluated.
    int d{b++};

    std::cout << "++a: " << c << "\n";
    std::cout << "a++: " << d << "\n";
}

// Shows how conditional operator ?: works, can use instead of if/else.
// Ensure to parenthesise.
void cond_operator(int m, int n) {
    // Conditional operator ?: takes form:
    // condition ? statement1 : statement2;
    int o{(m > n) ? m : n};
    std::cout << "The max of " << m << " and " << n << " is " << o << "\n";
}

int main() {
    int x{69};
    int y{17};

    static_cast_ex(x, y);
    assignment_operators(x, y);
    exponentiation(3.0, 4.0);

    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;

    if (is_even(num)) {
        std::cout << num << " is even.\n";
    } else {
        std::cout << num << " is odd.\n";
    }

    prepostfix(5);
    cond_operator(10, 20);

    return 0;
}