#include <stdio.h>
int main()
{
    int num=1021, rem, result = 0, place = 1;
    if (num == 0)
    {
        result = 1;
    }
   while (num > 0)
    {
        rem = num % 10;
        if (rem == 0)
            rem = 1;
        result = rem * place + result;
        place = place * 10;
        num = num / 10;
    }
   printf("Number after replacing 0 with 1: %d", result);
    return 0;
}
