#include <stdio.h>

void find_min_max(int arr[], int n, int *min, int *max) {
    int i;
    *min = arr[0];
    *max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < *min) {
            *min = arr[i];
        }
        if(arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int n, i, min, max;
    int arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    find_min_max(arr, n, &min, &max);
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);
    return 0;
}
