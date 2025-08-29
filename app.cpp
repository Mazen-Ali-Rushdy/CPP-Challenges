#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int solve(vector<string> v){
  int result = 0;
  for (string str : v)
  {
    if (isdigit(str[0]))
    {
      (stoi(str) % 2 == 0) ? result++ : result--;
    }
  }
  return result;
}

int main () {
  vector <string> vec = {"0","1","2","3","a","b"};

  cout << solve(vec);
  return 0;
}