#include<stdio.h>
int main()
{
    int n=5;
    int count=0;
    if(n<=1)
    printf("%d is not prime number\n",n);
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            count++;
         }
         if(count>2)
         printf("%d is not prime number\n",n);
         else
         printf("%d is prime",n);
    }
        return 0;
}
