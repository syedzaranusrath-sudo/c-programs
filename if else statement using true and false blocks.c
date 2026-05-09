#include<stdio.h>
void main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>20 && age<30)
    {
        printf("\nyour age is:%d",age);
        printf("\ncoffee with me");
    }
    else
      printf("\nyour age is:%d",age);
      printf("\ngo home");
      printf("\nout of if else");
}
