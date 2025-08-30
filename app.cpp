#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

std::string vaporcode(const std::string &str) {
  string result;
  
  
  for (char c : str) {
    if (isspace(c)) continue;
    result += char(toupper(c));
    result += "  ";
  }
  
  result.pop_back();
  result.pop_back();
  
  
  return result;
}


int main () {
  cout << vaporcode("Let's go to the movies");
  return 0;
}