#include <iostream>
#include <string>
#include <vector>
using namespace std;


int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int result = 0;
  for (int i : a)
    result += i;
  for (int i : b)
    result += i;
  return result;
}

int main () {
  vector <int> arr1 {1, 2, 4};
  vector <int> arr2 {2, 2, 4};
  cout << arrayPlusArray(arr1, arr2);
  return 0;
}