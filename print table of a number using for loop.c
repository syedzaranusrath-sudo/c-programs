#include <stdio.h>
void main()
{
    int number,i,mul;
    printf("enter a number:");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        mul=number*i;
        printf("%d*%d=%d\n",number,i,mul);
     }
}
  
