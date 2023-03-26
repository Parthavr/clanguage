#include<stdio.h>
int main(){
    int start,end,sum=0;
    printf("enter the  satring value:");
    scanf("%d",&start);
    printf("enter the  end value:");
    scanf("%d",&end);
for(int i=start;i<=end;i++){
sum += i;
}
    printf("The sum of the numbers from %d to %d is %d.\n", start, end, sum);
    return 0;

}
