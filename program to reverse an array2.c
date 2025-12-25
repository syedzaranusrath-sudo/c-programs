#include<stdio.h>
int main()
{
   int a[ ]={10,20,30,40,50};
   int i,n=5;
   printf("after reversing array elements are\n");
   for(i=n-1;i>=0;i--)
   printf("%d\t",a[i]);
   return 0;
}
