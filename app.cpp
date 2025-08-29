#include <iostream>
#include <string>
#include <vector>
using namespace std;

unsigned int strCount(const std::string& word, char letter){
  int count = 0;
  for (int i = 0; i < word.length(); i++)
  {
    if (word[i] == letter)
    {
      count += 1;
    }
  }
  return count;
}


int main () {
  cout << strCount("Hello", 'o');
  return 0;
}