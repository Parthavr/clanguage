#include<stdio.h>
int main(){
    int num,rem,sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);
     while (num != 0) {
        rem = num % 10;
        num /= 10;
    }

    printf("The sum of  %d.\n", sum);

    return 0;
}

