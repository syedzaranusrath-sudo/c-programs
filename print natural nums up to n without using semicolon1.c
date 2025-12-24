#include <stdio.h>
int main()
{
    int n = 1;
     while (printf("%d ", n) && n++)
    {
        if (n > 10)
            break;
    }
    return 0;
}
