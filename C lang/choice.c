#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter an operator (+, -, *): ");
    scanf("%c", &op);
    printf("enter the two number:");
    scanf("%d %d %d",&a,&b);
    switch (op)
    {
    case '+':
    printf("add of  %d and %d is :%d",a,b,a+b);
        break;
    case '-':
    printf("sub of %d and %d is %d",a,b,a-b);
        break;
    case '*':
    printf("mul of %d and %d is %d",a,b,a*b);
        break;    
    default:
    printf("invaild");
        
    }
    return 0;

}