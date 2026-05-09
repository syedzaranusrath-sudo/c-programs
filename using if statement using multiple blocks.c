#include<stdio.h>
void main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>20 && age<30)
    printf("\nyour age is:%d",age);
    printf("\nyou can go coffee with me");
    if(age>15)
      printf("\nyour age is:%d",age);
      printf("\nits time to go home");
}
