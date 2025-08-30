#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

std::string multi_table(int number)
{
  string result;
  for (int i = 1; i <= 10; i++) {
    result += to_string(i) + " * " + to_string(number) + " = " + to_string(i * number);
    result += "\n";
  }
  result.pop_back();
  return result;
}


int main () {
  cout << multi_table(6);
  return 0;
}