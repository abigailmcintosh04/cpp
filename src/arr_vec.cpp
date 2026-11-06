#include <array>
#include <iostream>
#include <vector>

void print_array(std::array<double, 4> arr) {
    for (double d : arr) {
        std::cout << d << ' ';
    }
    std::cout << std::endl;
}

void print_vector(std::vector<double> vec) {
    for (double d : vec) {
        std::cout << d << ' ';
    }
    std::cout << std::endl;
}

int main() {
    // Arrays (fixed size)
    std::array<double, 4> four_vec{2.7, 3.1, 9.8, 1.6};
    print_array(four_vec);
    std::cout << std::endl;

    // Vectors (dynamic size)
    std::vector<double> dynamic_vec{0.0, 0.2, 0.4, 0.6};
    dynamic_vec.push_back(0.8);                       // Add an element to the end of the vector
    dynamic_vec.insert(dynamic_vec.begin() + 1, 0.1); // Insert an element at index 1
    dynamic_vec.insert(dynamic_vec.end(), 0.9);       // Insert an element at the end of the vector
    dynamic_vec.pop_back();                           // Remove the last element from the vector
    dynamic_vec.erase(dynamic_vec.begin() + 2);       // Remove the element at index 2
    print_vector(dynamic_vec);

    std::cout << std::endl;
    dynamic_vec.clear();
    dynamic_vec.push_back(9.11);
    dynamic_vec.push_back(6.35);
    print_vector(dynamic_vec);

    std::cout << std::endl;
    std::cout << "Length of vector: " << dynamic_vec.size() << std::endl;
    std::cout << std::endl;

    std::vector<double> v;
    v.reserve(100); // Reserve space for 100 elements
    for (int i = 0; i < 100; i++) {
        v.push_back(i);
    }
    print_vector(v);

    return 0;
}