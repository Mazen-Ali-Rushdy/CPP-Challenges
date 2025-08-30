#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

int repeats(std::vector<int>v){
  int result = 0;
  int count = 0;
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size(); j++) {
      if (v[i] == v[j]) {
        count++;
        if (count >= 2) {
          break;
        }
      }
    }
    if (count == 1) {
      result += v[i];
    }
    count = 0;
  }
  return result;
}

int main () {
  cout << odd_count(15);
  return 0;
}