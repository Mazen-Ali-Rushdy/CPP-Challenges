#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;


int elevator_distance(std::vector<int> array) {
  int result = 0;
  
  for (int i = 0; i < array.size() - 1; i++) {
    if (array[i] > array[i + 1]) {
      result += (array[i] - array[i + 1]);
    }
    else {
      result += (array[i + 1] - array[i]);
    }
  }
  return result;
}


int main () {
  vector <int> floors {5, 2, 8};
  
  cout << elevator_distance(floors);
  return 0;
}