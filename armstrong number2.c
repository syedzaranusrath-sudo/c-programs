#include <stdio.h>
#include <math.h>
int main()
{
    int n=153,sum=0;
    int remainder,armstrong;
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
