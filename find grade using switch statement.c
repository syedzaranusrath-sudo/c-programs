#include<stdio.h>
void main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    switch(marks/10)
    {
        case 8:
        printf("grade is a");
        break;
        case 7:
        printf("grade is b");
        break;
        case 6:
        printf("grade is c");
        break;
        default:
        printf("grade is d");
    }
printf("\ngo to home");
}
    
