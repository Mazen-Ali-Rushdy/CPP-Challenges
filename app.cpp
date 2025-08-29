#include <iostream>
#include <vector>
using namespace std;

string doubles(string s){
  string result = ""; // 
    for (char ch : s)
    {
      if (ch == result.back())
      {
        result.pop_back();
      }
      else
      {
        result.push_back(ch);
      }
    }
  return result;
}
int main () {
  cout << doubles("abbbzz");
  return 0;
}