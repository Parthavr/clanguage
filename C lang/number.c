#include <stdio.h>

void print_pattern(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            if(j % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}