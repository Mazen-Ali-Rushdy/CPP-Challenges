#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> invert(vector<int> values)
{
  for (int& inv : values)
  {
    inv *= -1;
  }
  return values;
}

int main () {
  vector <int> arr = {1, 2, 3, 4, 5};

  invert(arr);

  vector<int> inverted_arr = invert(arr);
  
   for (int num : inverted_arr) // استخدم حلقة لطباعة كل عنصر على حدة
  {
    cout << num << " ";
  }
  return 0;
}