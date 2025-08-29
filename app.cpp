#include <iostream>
#include <string>

using namespace std; 

string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
  string sloution = "";
  for (int i = 1; i < str.length() - 1; i++)
  {
      sloution += str[i];
  }
  return sloution; 
}
int main () {
  cout << sliceString("tuna");
  return 0;
}