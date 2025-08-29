#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> divisible_by(vector<int> numbers, int divisor)
{
  vector<int> result = {};
    for (int i : numbers)
    {
      if (i % divisor == 0)
        result.push_back(i);
    }
  return result;
}
int main () {
  vector <int> vec {1, 2, 3, 4, 5, 6};
  vector <int> divisible_vec = divisible_by(vec, 2);

  for (int i : divisible_vec)
  {
      cout << i << " ";
  }
  return 0;
}