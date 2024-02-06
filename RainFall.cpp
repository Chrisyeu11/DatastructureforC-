#include <iostream>
#include <iomanip>
using namespace std;
float Getinches(int&, float&);

int main() {
 float average;
 float totalrain;
 int numberofdays;
cout << "enter the number of days: \t";
cin >> numberofdays;
  average = Getinches(numberofdays, totalrain);
    if (totalrain == 0)
    cout << "there was no rain during this period\n";
  else
  {
    cout << "the average rainfall over" << numberofdays << "days is " << setprecision(3) << average << endl;
    }
  return 0;
  }
float Getinches(int& numberofdays, float& totalrain)
{
  float inches;
  int counter = 1; 
  totalrain = 0.0;
  while(counter <= numberofdays)
    {
      cout << "enter the rainfall for day " << counter << ": \t";
      cin >> inches;
      totalrain += inches;
      counter++;
    }

  if (totalrain == 0)
    return 0;
  else return totalrain / numberofdays;
  
}
