#include<stdio.h>
int main(){
    int num;
    printf("enter the value even or odd:");
    scanf("%d",&num);
    if(num %2 == 0)
    {
        printf("print even");
    }
    else{
        printf("print odd");
    }
    return 0;
}