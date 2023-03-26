#include<stdio.h>
int main(){
    int a,b;
    printf("enter largest number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is a largest",a);

    }
    else if(b>a){
        printf ("%d is b largest",b);
    }
else{
    printf("both are equal");

}
    
    return 0;
}