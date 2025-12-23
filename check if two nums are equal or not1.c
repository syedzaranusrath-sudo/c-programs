#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a ^ b)
        printf("Numbers are NOT equal");
    else
        printf("Numbers are equal");
     return 0;
}
