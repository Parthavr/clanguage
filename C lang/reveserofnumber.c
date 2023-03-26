#include<stdio.h>
int main() {
    int num, rev;

    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverse(num);

    printf("The reverse of the number is %d.\n", rev);

    if (is_palindrome(num)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}





