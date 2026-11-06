#include <cmath>
#include <iostream>
#include <vector>

struct Point {
    int x;
    int y;
};

double abs_val(Point p) { return std::sqrt(p.x * p.x + p.y * p.y); }

std::tuple<std::vector<int>, std::vector<int>> double_vector(std::vector<int> &doubled) {
    std::vector<int> undoubled{doubled};
    for (int &i : doubled) {
        i *= 2;
    }
    return {undoubled, doubled};
}

void print_vector(const std::vector<int> &vec) {
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    Point p{5, 7};
    std::cout << "Point coordinates: " << p.x << ", " << p.y << std::endl;
    p.x = 2;
    p.y = 3;
    std::cout << "Point coordinates: " << p.x << ", " << p.y << std::endl;
    std::cout << "Absolute value: " << abs_val(p) << std::endl;

    std::pair<int, float> pair{6, 9.38};
    std::cout << "Pair: (" << pair.first << ", " << pair.second << ")" << std::endl;

    std::tuple<int, bool, std::string> tuple{1, true, "Hello"};
    std::get<0>(tuple) = 42;
    std::cout << "Tuple: (" << std::get<0>(tuple) << ", " << std::get<1>(tuple) << ", "
              << std::get<2>(tuple) << ")" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5};
    print_vector(vec);
    auto [undoubled, doubled] = double_vector(vec);
    print_vector(undoubled);
    print_vector(doubled);

    return 0;
}