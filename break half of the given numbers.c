#include<stdio.h>
int main()
{
    int num;
    printf("the natural numbers are\n");
    for(num=0;num<=50;num++)
    {
        printf(" %d",num);
    if(num==25)
    {
        break;
    }
    }
    return 0;
}
