#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

#include <array>
using namespace std;
int points(const std::array<std::string, 10>& games) {
  int result = 0;
  for (int i = 0; i < games.size(); i++)
  {
    int x = games[i][0] - '0';
    int y = games[i][2] - '0';
    if (x < y) result += 0;
    if (x == y) result += 1;
    if (x > y) result += 3;
  }
  return result;
}


int main () {
   array<string, 10> football_games = {
    "3:1", "1:2", "0:0", "4:3", "2:2", 
    "1:0", "2:1", "0:3", "5:2", "1:1"
  };
  cout << points(football_games);
  return 0;
}