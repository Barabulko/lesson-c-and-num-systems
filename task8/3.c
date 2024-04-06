#include <stdio.h>
#include <limits.h>

int find_max_array(int size, int a[]) {
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    
    int max = find_max_array(n, a);
    printf("Максимальный элемент в массиве: %d\n", max);

    return 0;
}