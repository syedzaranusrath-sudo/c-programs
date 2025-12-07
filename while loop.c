#include<stdio.h>
int main()
{
  int end,i;
  i=7;
  printf("enter the ending:");
  scanf("%d",&end);
  printf("the multiplies of 7 is\n");
  while(i<=end)
  {
      printf("%4d\n",i);
      i+=7;
  }
  printf("the loop is end");
  return 0;
  }
