#include<stdio.h>
int main(){
    int res,fact,n=6;
    printf("enter the factroial:");
    scanf("%d",&res);
    for ( int i = 1; i <= n; ++i) {
        fact *= i;
    }
    printf("the factiral  of  %d",n,fact);
    return 0;
}