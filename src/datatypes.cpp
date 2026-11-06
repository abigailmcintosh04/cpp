#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p{5, 7};
    std::cout << "Point coordinates: " << p.x << ", " << p.y << std::endl;
    p.x = 2;
    p.y = 3;
    std::cout << "Point coordinates: " << p.x << ", " << p.y << std::endl;

    return 0;
}