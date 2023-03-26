#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of factors of %d = %d\n", n, sum);

    return 0;
}
