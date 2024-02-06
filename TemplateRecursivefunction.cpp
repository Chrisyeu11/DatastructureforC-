#include <iostream>
using namespace std;
template <typename T>
T power(T base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}
int main(){
  int base, exponent;
  cout << "Enter the base: ";
  cout << "enter the exponent: ";
  cin >> base >> exponent;
  cout << base << " to the power of " << exponent << " is " << power(base, exponent) << endl;
  return 0;
}