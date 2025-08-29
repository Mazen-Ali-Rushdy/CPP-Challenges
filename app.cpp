#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrom (const std::string& str)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (tolower(str[i]) != tolower(str[str.length() - 1 - i]))
    {
      return false;
    }
  }
  return true;
}

int main () {
  cout << isPalindrom("a");
  return 0;
}