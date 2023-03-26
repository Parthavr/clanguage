#include<stdio.h>
int main(){
    int yy,yearvalue;
    printf("enter the value even or odd:");
    scanf("%d",&yy);
    scanf("%d",&yearvalue);
    if(yearvalue %4 == 0){
        if(yearvalue %100 == 0){
            if(yearvalue %400 == 0){
             printf("%d is leap year",yearvalue)
            } else {
                printf("%d is not a leap year.\n", yearvalue);
                   }
        } else {
            printf("%d is a leap year.\n", yearvalue);
        }
    }else {
    
   printf("%d is not a leap year.\n", yearvalue);
        }

    return 0;  
}
