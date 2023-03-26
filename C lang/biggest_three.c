#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a biggest number:");
    scanf("%d %d",&a,&b,&c);
    if(a=>b && a>=c)
    {
        printf("a is greather is %d",a);
    }
    elseif (b=>a && b>=c )
     {
        printf("b is greather is %d",b);
    }
    else{
        printf("c is biggest is %d ",c);
    }

    return 0;
}