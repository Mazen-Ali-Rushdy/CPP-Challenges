#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;


bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for (int i = 0; i < seq.size(); i++)
    {
      if (seq[i] == elem)
      {
        return true;
      }
    }
  return false;
  }

int main () {
  vector <string> nums = {"j", "f", "d", "e"};
  cout << check(nums, "j");
  return 0;
}