#include<stdio.h>
int main(){
    int rem,n1,n2;
    printf("enter the two number:");
    scanf("%d %d %d", &rem,&n1,&n2);
    rem =n1%n2;
    
    printf("The GCD of %d and %d is %d.\n", n1, n2, rem);
    return 0;
}