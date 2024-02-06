#include <iostream>
using namespace std;
int multipleNum(int a, int b, int mult){
  if (a>b) return 0;
  int count = 0;
  for (int i = a; i<=b; i++){
    if ((i% mult) == 0)
      count++;
  }
  return count;
  }

int main() {
  int a, b, multi;
  cout << "Enter the range a and b: ";
  cin >> a >> b;
  cout << "Enter the number to check for multiples: ";
  cin >> multi;
  int c = multipleNum(a, b, multi);
  cout << "Number of multiple of " << multi << " between " << a << " and " << b << " is " << c << endl;
  return 0;
}