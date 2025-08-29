using namespace std;
bool XO(const string& str)
{
  int countX = 0;
  int countO = 0;
  for (char ch : str)
  {
    if (ch == 'O' || ch == 'o')
    {
      countO += 1;
    }
    else if (ch == 'X' || ch == 'x')
    {
      countX += 1;
    }
  }
  return countX == countO;
}

int main () {
  
  return 0;
}