#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char time_str[]="10:12:50";
    char *token;
    int hh,mm,ss;
   unsigned long total_seconds;
    
    token= strtok(time_str,":");
    hh = atoi(token);
    token= strtok(NULL,":");
    mm = atoi(token);
    token= strtok(NULL,":");
    ss = atoi(token);
    total_seconds = hh * 3600 + mm *60 + ss;
    printf("the total seconds is :%lu",total_seconds);
    return 0;
}




