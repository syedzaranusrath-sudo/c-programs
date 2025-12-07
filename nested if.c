#include<stdio.h>
int main()
{
  int num;
  num=0;
  printf("enter a integer number:");
  scanf("%d",&num);
  if(num>0)
  {
      if(num/2==0)
      {
        printf("the number is even and positive");
  }
  else 
  {
      printf("tne number is odd and positive");
  }
  }
  else if(num<0)
  {
      if(num/2==0)
      {
      printf("the number is even and nagetive");
  }
  else
  {
      printf("the number is even and positive");
  }
  }
  else
  {
      printf("the number is 0");
  }
   return 0;
}

    
    
