#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;


using namespace std;
string sum_str( string a,  string b) {
  return to_string(stoi(a == "" ? "0" : a) + stoi(b == "" ? "0" : b));
}



int main () {
  cout << sum_str("4", "5");
  return 0;
}