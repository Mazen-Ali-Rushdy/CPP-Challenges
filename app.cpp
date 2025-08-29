#include <iostream>
#include <vector>
using namespace std;

int sum(std::vector<int> nums) {
  int result = 0;
  if (nums.size() != 0)
  {
    for (int num : nums)
    {
      result += num;
    }
  }
  else return {};
  return result;
}
int main () {
  vector<int> arr = {1, 2, 4};
  cout << sum(arr);
  return 0;
}