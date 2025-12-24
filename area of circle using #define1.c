#include<stdio.h>
#define pi 3.14159
int main()
{
    float radius,area;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of circle is: %2f\n",area);
    return 0;
}
