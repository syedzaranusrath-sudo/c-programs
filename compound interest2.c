#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time;
    float amount,compoundinterest;
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interest:");
    scanf("%f",&rate);
    printf("enter time:");
    scanf("%f",&time);
    amount=principal*pow((1+rate/100),time);
    compoundinterest=amount-principal;
    printf("the compound interest is:%f",compoundinterest); 
    return 0;
}
