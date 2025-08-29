#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

std::string makeUpperCase (const std::string& input_str)
{
  std::string result = "";
  for (char c : input_str)
  {
    result += toupper(c);
  }
  return result;
}


int main () {
cout <<  makeUpperCase("hello");
  return 0;
}