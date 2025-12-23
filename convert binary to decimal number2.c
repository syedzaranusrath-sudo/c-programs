#include <stdio.h>
#include <math.h>
int main()
{
    long int n=11011;
    int i = 0, sum = 0, remainder;
    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + remainder * pow(2, i);
        n = n / 10;
        i++;
    }
    printf("Decimal number is %d", sum);
    return 0;
}
