#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}
