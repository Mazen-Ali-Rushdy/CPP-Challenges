#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;


std::vector<int> evenNumbers(std::vector<int> arr, int n) {
  vector <int> new_vec(n);
  int last_idx = n - 1;
  if (n == 0) {
    return {};
  }
  for (int i = arr.size() - 1; i >= 0; i--) {
    if (arr[i] % 2 == 0) {
      new_vec.at((last_idx)--) = arr[i];
      if (last_idx < 0) {
        break;
      }
    }
  }
  
  return new_vec;
}

int main () {
  vector <int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector <int> result = evenNumbers(nums, 3);

  for (int num : result) {
    cout << num << "\t";
  }
  
  return 0;
}