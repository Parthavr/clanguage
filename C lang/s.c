#include<stdio.h>
int main(){
    int a,b;
    printf("enter a biggest number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is greather is %d",a);
    }
    else {
        printf("b is greather is %d",b);
    }
    return 0;
}