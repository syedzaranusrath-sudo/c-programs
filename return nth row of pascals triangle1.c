#include <stdio.h>
int main()
{
    int n, i;
    int c = 1;
    printf("Enter row number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", c);
        c = c * (n - i - 1) / (i + 1);
    }
    return 0;
}
