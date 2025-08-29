#include <vector>

double calcAverage(const std::vector<int>& values){
  double sums = 0;
  int size = values.size();
  
  for (double val : values) {
    sums += val;
  }
  
  return sums / size;
  
}