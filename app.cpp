#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

using namespace std;
string solve(string s, int first_index, int last_index){
  if (last_index < s.length())
  {
    reverse(s.begin() + first_index, s.begin() + last_index + 1);
  }
  else
  {
    reverse(s.begin() + first_index, s.end());
  }
  return s;
}

int main () {
  cout << solve("codewars",1,5);
  return 0;
}