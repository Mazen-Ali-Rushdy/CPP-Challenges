#include <iostream>
#include <string>
using namespace std;

std::string correct(std::string str){
  //your code here
  std::string result = "";
  for (char c : str)
  {
    if (c == '5')
      result += 'S';
    else if (c == '0')
      result += 'O';
    else if (c == '1')
      result += 'I';
    else 
      result += c;
  }
  return result;
}
int main () {
  cout << correct("1F-RUDYARD K1PL1NG");
  return 0;
}