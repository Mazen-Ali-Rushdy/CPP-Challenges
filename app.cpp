#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

int odd_count(int n){
  return n / 2;
}

int main () {
  cout << odd_count(15);
  return 0;
}