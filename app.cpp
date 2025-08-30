#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;


bool solution(std::string const &str, std::string const &ending) {
  int str_idx = str.length() - 1;
  int ending_idx = ending.length() - 1;
  int result = 0;
  
  if (ending.length() > str.length()) return false;
  
  for (int i = 0; i < ending.length(); i++) {
    if (str[str_idx - i] != ending[ending_idx - i]) {
      return false;
    }
  }
  
  return true;
  
}

int main () {
  cout << solution("abcde", "cde");
  return 0;
}