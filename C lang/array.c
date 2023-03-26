#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element is %d:");
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<5){
        printf("%d",arr[i]);
    }

    return 0;
}