#include<stdio.h>
int main(){
    int a,b;
    printf("enter smallest number:");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("%d is a samllest",a);

    }
    else if(b<a){
        printf ("%d is b samllest",b);
    }
else{
    printf("both are equal");

}
    
    return 0;
}