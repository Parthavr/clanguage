#include <stdio.h>

int main() {
    int num = 5; // define a const variable
    const int user_input;

    printf("Enter a number: ");
    scanf("%d", &user_input);

    num = user_input; // try to assign user input to const variable

    printf("num = %d\n", num);

    return 0;
}