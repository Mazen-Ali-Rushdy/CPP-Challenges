#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

std::string repeat_str(size_t repeat, const std::string& str) {
  string result;
  for (int i = 0; i < repeat; i++) {
    result += str;
  }
  return result;
}

int main () {
  cout << repeat_str(17, "*");
  return 0;
}