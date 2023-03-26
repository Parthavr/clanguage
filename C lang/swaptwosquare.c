void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
void sqr_and_cube(int n, int *s, int *c) {
    *s = n * n; 
    *c = n * n * n; 
}