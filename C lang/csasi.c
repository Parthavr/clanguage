
#include <stdio.h>

int main() {
    char str[] = "12345";
    int res = 0;
    int i = 0;

    while (str[i]) {
        int ival = str[i] - '0';  // convert char to int value
        res = res * 10 + ival;    // add digit to result
        i++;
    }

    printf("The integer value is: %d", res);

    return 0;
}
