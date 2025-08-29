#include <iostream>
using namespace std;

int move(int position, int roll) {
  // your code here
  return position + roll * 2;
}

int main () {
  move(3, 6);
  return 0;
}