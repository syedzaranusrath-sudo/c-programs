#include <stdio.h>
int main()
{
    int n ,i= 1;
    printf("enter n value:");
    scanf("%d",&n);
     while (printf("%d ", i) && i++)
    {
        if (i > n)
            break;
    }
    return 0;
}
