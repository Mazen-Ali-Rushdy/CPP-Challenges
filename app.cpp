#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int result = 0;
  for (int num : classPoints)
  {
    result += num;
  }
  return (result / classPoints.size()) < yourPoints;
}

int main () {
  vector <int> values {100, 40, 34, 57, 29, 72, 57, 88};
  cout << betterThanAverage(values, 75);
  return 0;
}