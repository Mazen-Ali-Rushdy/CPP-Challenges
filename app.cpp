#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

vector<string> string_to_array(const string& s) {
  vector<string> arr = {};
  string temp = "";
  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] != ' ')
    {
      temp += s[i]; // some value
    }
    else
    {
      arr.push_back(temp);
      temp = "";
    }
  }
  arr.push_back(temp);
  return arr;
}


int main () {
  vector <string> arr = string_to_array("some value");

  for (string ele : arr) {
    cout << ele << "\t";
  }
  return 0;
}