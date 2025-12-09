#include<stdio.h>
int main()
{
    int num;
    printf("the odd numbers are\n");
   for(num=0;num<=100;num++)
    {
        if(num%2==0)
    {
        continue;
    }
    printf(" %d",num);
    }
    return 0;
}
