#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<int> MonkeyCount(int n) {
  vector<int> arr = {};
  for (int i = 1; i <= n; i++)
  {
    arr.push_back(i);
  }
  return arr;
}


int main () {
  vector <int> arr = MonkeyCount(9);
  for (int num : arr) {
    cout << num << " ";
  }
  return 0;
}