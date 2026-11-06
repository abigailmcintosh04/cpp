#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    switch (num) {
    case 1:
        std::cout << "You entered 1!" << std::endl;
        break;
    case 2:
        std::cout << "You entered 2!" << std::endl;
        break;
    case 3:
        std::cout << "You entered 3!" << std::endl;
        break;
    default:
        std::cout << "You entered a number other than 1, 2, or 3!" << std::endl;
        break;
    }

    num == 67 ? std::cout << "You entered 67, you are so immature!" << std::endl
              : std::cout << "You did not enter 67! Well done on being mature." << std::endl;

    return 0;
}