#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

std::vector<int> digitize(unsigned long n) 
{
  vector<int> arr = {};
  string st = to_string(n);
  reverse(st.begin(), st.end());
  for (int i = 0; i < st.length(); i++)
  {
    arr.push_back(st[i] - '0');
  }
  return arr;
  
}


int main () {
  return 0;
}