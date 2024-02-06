#include <iostream>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {
    int n, n1, n2, n3, n4;
    
    std::cout << "Enter a positive integers: ";
    std::cin >> n >> n1 >> n2 >> n3 >> n4;
  std::cout << "\nFactorial of\n " << n << " = " << factorial(n);
  std::cout << "\nFactorial of\n " << n1 << " = " << factorial(n1);
  std::cout << "\nFactorial of\n " << n2 << " = " << factorial(n2);
  std::cout << "\nFactorial of\n " << n3 << " = " << factorial(n3);
  std::cout << "\nFactorial of\n " << n4 << " = " << factorial(n4);
    return 0;
}