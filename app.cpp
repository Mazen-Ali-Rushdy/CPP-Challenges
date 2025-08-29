#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

unsigned int most_frequent_item_count(const std::vector<int>& collection) {
  int count = 0;
  int result = 0;
  for (int num : collection) {
    for (int n : collection) {
      if (num == n) {
        count++;
      }
    }
    if (count > result) {
      result = count;
    }
    count = 0;
  }
  return result;
}

int main () {
  vector <int> values {3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3};
  cout << most_frequent_item_count(values);
  return 0;
}