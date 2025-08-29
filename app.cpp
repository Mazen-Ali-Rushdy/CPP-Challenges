using namespace std;
vector<int> climb(int n)
{
   vector<int> result;
  
  while(n > 1)
  {
    result.insert(result.begin(), n);
    n = n / 2;
  }
  result.insert(result.begin(), n);
  return result;
}

int main () {
  
  return 0;
}