#include<stdio.h>
int main(){
    int day;
    printf("enter the day:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("mon");
        break;
         case 2:
        printf("tue");
        break;
         case 3:
        printf("wes");
        break;
         case 4:
        printf("thu");
        break;
         case 5:
        printf("fri");
        break;
        default:
        printf("invaild choice");
    }

        
    
}