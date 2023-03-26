#include<stdio.h>
int main()
{
    float radius,area;
    const float pI= 3.15;
    printf("enter the radius");
    scanf("%f",&radius);
    area=pI*radius*radius;
    printf("the area of the cricle with %f is %f\n",radius,area);
    return 0;
}
