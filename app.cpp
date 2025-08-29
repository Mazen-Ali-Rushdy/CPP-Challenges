#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  int count = 0;
  int sum_negs = 0;


    if (input.empty()) {
      return {};
    }
  
  for (int num : input) {
    if (num > 0) 
      count += 1;
    else if (num < 0)
      sum_negs += num;
      
  }
  
  return {count, sum_negs};
}

int main () {
  vector <int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};

  vector <int> result = countPositivesSumNegatives(nums);


  cout << "{" << result.front() << ", " << result.back() << "}";
  return 0;
}