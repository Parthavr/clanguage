#include<stdio.h>
int main()
{
    char ch= 'A';
    printf("alphabet from A to Z:");
    while(ch<'Z')
    {
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}