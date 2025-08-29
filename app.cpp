#include <iostream>
using namespace std;

double SakuraFall(double v) {
     return v <= 0 ? 0 : 400 / v;
}
int main () {
  cout << SakuraFall(5);
  return 0;
}