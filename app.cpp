#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
      sum += numbers[i] * numbers[i];
    }
  return sum;
}

int main () {
  vector <int> nums {1, 2};
  cout << square_sum(nums);
  return 0;
}