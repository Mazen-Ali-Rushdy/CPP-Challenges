#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

string twoSort(vector<string> s)
{
  sort(s.begin(), s.end());
  string result = s[0];
  for (int i = 1; i < result.length(); i += 4)
  {
    result.insert(i, "***");
  }
  return result;
}

int main () {
  vector <string> words { "bitcoin", "take", "over", "the", "world", "maybe", "who", "knows", "perhaps" };
  cout << twoSort(words);
  return 0;
}