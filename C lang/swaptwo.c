#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the original num:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
     b=temp;
    printf("Enter copy number,a =%d",a);
     printf("Enter copy number,b =%d",b);
    return 0;


}