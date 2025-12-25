#include <stdio.h>
int main()
{
    int n=5, i;
    int c = 1;
    for (i = 0; i < n; i++)
    {
        printf("%d ", c);
        c = c * (n - i - 1) / (i + 1);
    }
    return 0;
}
