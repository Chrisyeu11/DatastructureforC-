#include "Color.h"
#include <iostream>
using namespace std;

Color::Color(string n, int r, int g, int b)
    : name(n), red(r), green(g), blue(b) {}

void Color::setname(string n) { name = n; }

void Color::setred(int r) { red = r; }

void Color::setgreen(int g) { green = g; }
void Color::setblue(int b) { blue = b; }

string Color::getname() { return name; }

int Color::getred() { return red; }

int Color::getgreen() { return green; }

int Color::getblue() { return blue; }

int Color::compare(Color c) {
  return red + green + blue - (c.getred() + c.getgreen() + c.getblue());
}
