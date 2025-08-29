#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int string_to_number(const std::string& s) {
  //your code here
  return stoi(s);
}
int main () {
  cout << string_to_number("123456");
  return 0;
}