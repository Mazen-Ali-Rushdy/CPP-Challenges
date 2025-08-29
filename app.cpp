#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

std::string DNAtoRNA(std::string dna){
 for (int i = 0; i < dna.length(); i++)
  {
   if (dna[i] == 'T')
     dna[i] = 'U';
 }
  return dna;
}


int main () {
  cout << DNAtoRNA("GCAT");
  return 0;
}