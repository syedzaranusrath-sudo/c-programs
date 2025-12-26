#include <stdio.h>
int main()
{
    int arr[5];
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}
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
