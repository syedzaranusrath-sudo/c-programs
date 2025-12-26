#include <stdio.h>
int main()
{
    int arr[] = {25, 10, 45, 5, 30};
    int n = 5;
    int i;
    int max, min;
    max = min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
    return 0;
}
