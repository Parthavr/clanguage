int largest(int a[], int size) {
    int max = a[0]; 


    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}