#include <stdio.h>
int main()
{
    int n=12345,remainder,reverse=0;
    while (n!=0)
    {
        remainder = n % 10;
        reverse=reverse*10+remainder;
        n = n / 10;
    }
     printf("reverse of a number is %d",reverse);
     return 0;
}
