#include<stdio.h>
void main()
{
    int a,b,sum,sub,mul,div;
    char operator;
    printf("enter the operator:");
    scanf("%c",&operator);
    printf("enter two values:");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
        case '+':
        sum=a+b;
        printf("addition is:%d",sum);
        break;
        case '-':
        sub=a-b;
        printf("subtraction  is:%d",sub);
        break;
        case '*':
        mul=a*b;
        printf("multiplication  is:%d",mul);
        break;
        case '/':
        div=a/b;
        printf("division is:%d",div);
        break;
        default:
        printf("enter the valid operator");
    }
}
    
