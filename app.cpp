#include <iostream>
#include <string>
#include <vector>
using namespace std;

int twice_as_old(int dad, int son) {
  if (dad == (son * 2))
    return 0;
  else if (dad > (son * 2))
    return dad - (son * 2);
  else
    return son * 2 - dad;
}

int main () {
  cout << twice_as_old(36, 7);
  return 0;
}