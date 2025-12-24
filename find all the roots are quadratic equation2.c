#include<stdio.h>
#include<math.h>
int main()
{
    float a=1,b=3,c=2,r1,r2,d;
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("the roots are real and equal\n");
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("root1=%f anf root2=%f",r1,r2);
    }
        else if(d>0)
        {
            printf("roots are real and different\n");
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("root1=%f",r1);
            printf("root2=%f",r2);
        }
        else
        {
            printf("the roos are imaginary");
        }
}
