#include <iostream>
#include <string>
#include <vector>
using namespace std;

double getVolumeOfCuboid(double length, double width, double height) {
  return length * width * height;
}

int main () {
  cout << getVolumeOfCuboid(2.1, 22.4, 19);
  return 0;
}