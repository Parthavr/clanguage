#include<stdio.h>
int main(){
    int rem,sum=0,num;
    printf("ENTER THE number");
    scanf("%d",&num);
    while(num>0){
        rem=num %10;
        sum = sum+(rem*rem*rem);
        num = num/10;

    }
    if(num == sum){
        printf("is armsr");
    }
    else{
        printf("not is arms");
    }
    return 0;

}