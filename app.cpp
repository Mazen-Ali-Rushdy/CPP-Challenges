#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

#include <string>
using namespace std;
string find_screen_height(int width, const string &ratio)
{
  int i = ratio.find(":");
  int wratio = stoi(ratio.substr(0, i));
  int hratio = stoi(ratio.substr(i + 1));
  int hight = (width * hratio) / wratio;
  return to_string(width) + "x" + to_string(hight);
  
}

int main () {
  return 0;
}