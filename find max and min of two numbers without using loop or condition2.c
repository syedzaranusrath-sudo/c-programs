#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a=3, b=5, max, min;
    max = (a + b + abs(a - b)) / 2;
    min = (a + b - abs(a - b)) / 2;
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
