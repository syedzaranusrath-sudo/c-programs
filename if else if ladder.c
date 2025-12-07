#include<stdio.h>
int main()
{
  int num;
  num=0;
  printf("enter a integer number:");
  scanf("%d",&num);
  if(num<0)
  {
      printf("the number is negative");
  }
  else if(num>0)
  {
      printf("tne number is positive");
  }
  else
  {
      printf("the number is 0");
  }
   return 0;
}

    
    
