#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

using namespace std;
long elementsSum(const vector<vector<int>>& arr, int d = 0){
  int result = 0;
  int index = arr.size() - 1;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i].size() > index) result += arr[i][index];
    else result += d;
    index--;
  }
  return result;
}

int main () {
  cout << solve("your code rocks");
  return 0;
}