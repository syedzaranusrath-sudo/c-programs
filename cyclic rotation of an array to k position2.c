#include <stdio.h>

int main()
{
    int arr[5];
    int n;
    int k = 2;
    int i, j, temp;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
     for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];  
      for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];   
        }
       arr[0] = temp;      
    }
       printf("Array after cyclic rotation:\n");
       for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
        return 0;
}
