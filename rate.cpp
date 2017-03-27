#include <cmath>
#include "rate.h"
int rate::Ra_prime(float Sa)
{
   return Ra + K * (Sa - Ea());
} 
int rate::Rb_prime(float Sb)
{
   return Rb + K * (Sb - Eb());
}
float rate::Ea()
{
  return 1 / (1+pow(10,(Rb-Ra)/400));
}
float rate::Eb()
{
  return 1 / (1+pow(10,(Ra-Rb)/400));
}
void rate::set_argument(int temp_K, float temp_Ra, float temp_Rb)
{
  K = temp_K;
  Ra = temp_Ra;
  Rb = temp_Rb;
}
