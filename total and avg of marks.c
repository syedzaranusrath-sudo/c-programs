#include<stdio.h>
void main()
{
int a,b,c,total,avg;
a=b=c=total=avg=0;
printf("enter the three subjects marks:");
scanf("%d%d%d",&a,&b,&c);
total=a+b+c;
avg=total/3;
printf("the total marks is:%d\n",total);
printf("the avg marks is:%d\n",avg);
}
