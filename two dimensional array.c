#include<stdio.h>
#define MAX_SIZE 50
#define MAX_SIZE 50
void main()
{
    int arr[MAX_SIZE][MAX_SIZE],rows,columns;
    printf("enter number of rows:");
    scanf("%d",&rows);
    printf("enter number of columns:");
    scanf("%d",&columns);
    printf("enter the elements of the matrix\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("elements[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\nthe matrix is\n");
    }
            for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
}
}

     
