#include <stdio.h>
void main()
{
    int size,total,i;
    float avg;
    printf("enter the size of an array:");
    scanf("%d",&size);
    int array[size];
    printf("enter 5 array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nprint all array elements:\n");
    for(i=0;i<size;i++)
    {
        printf(" %d",array[i]);
    }
    for(i=0,total=0;i<size;i++)
    {
        total+=array[i];
    }
    avg=(float)total/size;
    printf("\n total marks:%d",total);
    printf("\n avg marks:%f",avg);
    }
    
    
    
