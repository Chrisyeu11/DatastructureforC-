#include <iostream>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Maximum number is: " << max(num1, num2);
    return 0;
}