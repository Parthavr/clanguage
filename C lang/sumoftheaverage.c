#include <stdio.h>

void calculate(int arr[], int n, int *sum, float *avg) {
    int i;
    *sum = 0;
    for(i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *avg = (float)*sum / n;
}

int main() {
    int n, i, sum;
    float avg;
    int arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    calculate(arr, n, &sum, &avg);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
