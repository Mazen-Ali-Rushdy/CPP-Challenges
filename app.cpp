#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int quarter_of(int month){
  if (month >= 1 && month <= 12)
  {
    if (month <= 3)
      return 1;
    else if (month <= 6)
      return 2;
    else if (month <= 9)
      return 3;
    else
      return 4;
  }
}

int main () {
  
  cout << quarter_of(1);
  return 0;
}