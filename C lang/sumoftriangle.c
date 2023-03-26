#include <stdio.h>

int isTriangular(int n) {
    int sum = 0, i = 1;
    while (sum < n) {
        sum += i;
        i++;
    }
    return (sum == n);
}

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (isTriangular(i)) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of triangular numbers up to %d is %d.\n", n, sum);

    return 0;
}