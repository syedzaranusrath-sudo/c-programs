#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum=0;
    int remainder,armstrong;
    printf("enter n value:");
    scanf("%d",&n);
    armstrong=n;
    while (n!=0)
    {
        remainder = n % 10;
        sum = sum + remainder*remainder*remainder;
        n = n / 10;
         }
         if(armstrong==sum)
    printf("it is armstrong number");
    else
    printf("it is not armstrong number");
    return 0;
}
