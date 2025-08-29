#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int litres(double time) {
   return time / 2;
}

int main () {
  cout << litres(2);
  return 0;
}