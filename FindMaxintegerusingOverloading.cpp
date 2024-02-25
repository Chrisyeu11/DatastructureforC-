#include <iostream>

int max(int a, int b) {
  return (a > b) ? a : b;
} 
int max(int a, int b, int c) 
  {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int number1, number2, number3;
    std::cout << "Enter 3 integers: ";
    std::cin >> number1 >> number2 >> number3;
    std::cout << "Maximum number is: " << max(number1, number2, number3);
    return 0;
}