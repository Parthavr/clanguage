#include <stdio.h>
#include <limits.h>

int main() {
    long long max_num = LLONG_MAX;
    printf("Enter a number less than or equal to %lld: ", max_num);
    scanf("%lld", &max_num);

    if (max_num < LLONG_MAX) {
        max_num += 1;
        printf("The result is %lld\n", max_num);
    } else {
        printf("The number entered is already at the maximum limit\n");
    }

    return 0;
}
