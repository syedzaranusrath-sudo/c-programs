#include<stdio.h>
int main()
{
    int n1=15,n2=30,gcd,i;
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%1==0)
        gcd=i;
    }
    printf("gcd is %d",gcd);
    return 0;
}
