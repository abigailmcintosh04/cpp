#include <array>
#include <iostream>
#include <vector>

int main() {
    // Arrays (fixed size)
    std::array<double, 4> four_vec{2.7, 3.1, 9.8, 1.6};
    for (double d : four_vec) {
        std::cout << d << std::endl;
    }
    std::cout << std::endl;

    // Vectors (dynamic size)
    std::vector<double> dynamic_vec{0.0, 0.2, 0.4, 0.6};
    dynamic_vec.push_back(0.8);                       // Add an element to the end of the vector
    dynamic_vec.insert(dynamic_vec.begin() + 1, 0.1); // Insert an element at index 1
    dynamic_vec.insert(dynamic_vec.end(), 0.9);       // Insert an element at the end of the vector
    dynamic_vec.pop_back();                           // Remove the last element from the vector
    dynamic_vec.erase(dynamic_vec.begin() + 2);       // Remove the element at index 2
    for (double d : dynamic_vec) {
        std::cout << d << std::endl;
    }
    std::cout << "Length of vector: " << dynamic_vec.size() << std::endl;
    std::cout << std::endl;

    return 0;
}