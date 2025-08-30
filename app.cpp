#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

std::string solve(string s){
  string str_reverse;
  string result;
  int count = 0;
  
  for (char c : s) {
    if (isspace(c)) continue;
    else {
      str_reverse = c + str_reverse;
    }
  } // edocruo
  
  for (char c : s) {
    if (isspace(c)) {
      result += ' ';
    }
    else 
    {
      result += str_reverse[count++];
    }
  }
  return result;
}


int main () {
  cout << solve("your code rocks");
  return 0;
}