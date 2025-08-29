#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int past(int h, int m, int s) {
  // your code here
  int one_sec = 1000;
  int one_min = 60 * one_sec;
  int one_hour = 60 * one_min;
  return (h * one_hour) + (m * one_min) + (s * one_sec);
}


int main () {
  cout << past(0, 1, 1);
  return 0;
}