#include <iostream>
#include <string>
using namespace std;

template <typename T>
void displayvalue(T value) {
    cout << value << endl;
}   
int main(){
    string name;
    int age;
    double income;
   cout << "Enter your name: ";
   cin >> name;
   cout << "Enter your age: ";
   cin >> age;
   cout << "Enter your income: ";
   cin >> income;
displayvalue (name);  
displayvalue (age);
displayvalue (income);
  
}

