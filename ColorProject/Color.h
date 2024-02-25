
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Color {
private:
  string name;
  int red;
  int green;
  int blue;

public:
  Color(string, int, int, int);

  void setname(string);
  void setred(int);
  void setgreen(int);
  void setblue(int);
  string getname();
  int getred();
  int getgreen();
  int getblue();

  int compare(Color);
};
