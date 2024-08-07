#include <iostream> // Step 1: Include the iostream header

int main() {
    int number;
    std::cout << "Enter a number: "; // Using std::cout explicitly
    std::cin >> number; // Using std::cin explicitly
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
