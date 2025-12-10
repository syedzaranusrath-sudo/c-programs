#include <stdio.h>
void main()
{
    int array[5],total,i;
    float avg;
    printf("enter 5 array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",& array[i]);
    }
    printf("\nprint all array elements:\n");
    for(i=0;i<5;i++)
    {
        printf(" %d",array[i]);
    }
    for(i=0,total=0;i<5;i++)
    {
        total+=array[i];
    }
    avg=(float)total/5;
    printf("\n total marks:%d",total);
    printf("\n avg marks:%f",avg);
    }
    
    
    
