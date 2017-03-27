#include <iostream>
#include <cstdlib>
#include <fstream>
#include "rate.h"
using namespace std;
int main(void)
{
  int K;
  float Ra, Rb, Sa, Sb;
  rate Elo;
  ifstream inFile("file.in", ios::in);
  if(!inFile)
  { 
    cerr << "Failed opening" << endl;
    exit(1);
  }
  inFile >> K >> Ra >> Rb;
  Elo.set_argument(K, Ra, Rb);
  ofstream outFile("file.out", ios::out); 
  if(!outFile)
  { 
    cerr << "Failed opening" << endl;
    exit(1);
  }
  outFile << Ra << " " << Rb <<endl;
  while(inFile >> Sa)
  {
    Sb = 1 - Sa;
    outFile << Elo.Ra_prime(Sa) << " " << Elo.Rb_prime(Sb) <<endl;
    Elo.set_argument(K, Elo.Ra_prime(Sa), Elo.Rb_prime(Sb));
  }
  return 0;
}


