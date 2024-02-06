#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}
#include <iostream>
using namespace std;

int main() {
  double weeklyHours, hourlyPay, grossSalary, taxRate;

  cout << "Enter weekly hours: ";
  cin >> weeklyHours;

  cout << "Enter hourly pay: ";
  cin >> hourlyPay;

  grossSalary = weeklyHours * hourlyPay;

  if (grossSalary > 2000) {
    taxRate = 0.15;
  } else {
    taxRate = 0.35;
  }

  grossSalary -= (grossSalary * taxRate);

  cout << "Gross salary after tax deduction: " << grossSalary << endl;

  return 0;
}