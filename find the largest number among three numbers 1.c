#include<stdio.h>
int main()
{
    int a=30,b=70,c=60;
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    if(b>a && b>c)
{
    printf("%d",b);
}
else
{
    printf("%d",c);
}
return 0;
}
