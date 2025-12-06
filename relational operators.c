#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,e,f;
    printf("enter the values:");
    scanf("%d%d",&x,&y); 
    a=x<y;
    b=x<=y;
    c=x>y;
    d=x>=y;
    e=x==y;
    f=x!=y;
    printf("the a is=%d\n",a);
    printf("the b is=%d\n",b);
    printf("the c is=%d\n",c);
    printf("the d is=%d\n",d);
    printf("the e is=%d\n",e);
    printf("the f is=%d\n",f);
    return 0;
}
