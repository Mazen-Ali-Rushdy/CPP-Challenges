#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int grow(std::vector<int> nums) {
  // your code here
  int result = 1;
  for (int i : nums)
  {
    result *= i;
  }
  return result;
}


int main () {
  vector <int> nums = {1, 2, 3};

  cout << grow(nums);
  return 0;
}