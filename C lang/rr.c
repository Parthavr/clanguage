#include <stdio.h>
#include <string.h>

void rotate_string(char *str, int n) {
    int len = strlen(str);

    // Rotate the string n positions to the right
    char temp[n];
    strncpy(temp, str + len - n, n);
    memmove(str + n, str, len - n);
    memcpy(str, temp, n);
}

int main() {
    char str[] = "Hello, World!";
    int n = 5;

    printf("Original string: %s\n", str);

    rotate_string(str, n);

    printf("Rotated string: %s\n", str);

    return 0;
}
