#include<stdio.h>
int main()
{
    int a[5],i,n;
    printf("enter size of the array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("after reversing array elements are\n");
   for(i=n-1;i>=0;i--)
   printf("%d\t",a[i]);
   return 0;
}
