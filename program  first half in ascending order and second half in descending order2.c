#include <stdio.h>
int main()
{
    int arr[100];
    int n = 8;
    int i, j, temp;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int mid =n/2;
    for (i = 0; i < mid; i++)
    {
        for (j = i + 1; j < mid; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
      for (i = mid; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("Resultant array:\n");
        for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
        return 0;
}
