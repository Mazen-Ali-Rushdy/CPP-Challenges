#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

vector<int> reverseSeq(int n) {
  vector<int> arr = {};
  for (int i = n; i >= 1; i--)
  {
    arr.push_back(i);
  }
  return arr;
}


int main () {
  vector <int> nums = reverseSeq(6);

  for (int num : nums) {
    cout << num << "\t";
  }
  return 0;
}