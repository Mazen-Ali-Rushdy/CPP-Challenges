#include <iostream>
#include <string>
using namespace std;

std::string removeExclamationMarks(std::string str){
  //your code here
  std::string clean = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != '!')
    {
      clean += str[i];
    }
  }
  return clean;
  
}

int main () {
  cout << removeExclamationMarks("Hello World!");
  return 0;
}