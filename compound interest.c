#include<stdio.h>
#include<math.h>
int main()
{
  float principal,rate,time;
  float amount,compoundinterest;
  principal=2300;
  rate=7;
  time=4;
  amount=principal*pow((1+rate/100),time);
  compoundinterest=amount-principal;
  printf("the compound interest is:%f",compoundinterest);
  return 0;
}
