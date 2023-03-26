#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int i=0;
    printf("enter the string:");
    fgets(str, 100 ,stdin);
    while(str[i]){
    if(islower(str[i])){
        str[i] = toupper(str[i]);
    }else if(isupper(str[i])){
        str[i] = toupper(str[i]);
    }
    }
    i++;
printf("the string in toggle case: %s",str);
return 0;
}