#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string boolean_to_string(bool b){
  //Your code here
  string result;
  if (b == 0)
    result = "false";
  else
    result = "true";
  return result;
}

int main () {
  cout << boolean_to_string(true);
  return 0;
}