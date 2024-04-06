#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int i = 0, j = n - 1;

    while (i < j) {
        if (a[i] % 2 != 0 && a[j] % 2 == 0) {
            // Обмен элементов
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

        if (a[i] % 2 == 0) i++;
        if (a[j] % 2 != 0) j--;
    }
}

int main() {
    int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);

    sort_even_odd(n, a);

    printf("Массив с четными числами в начале и нечетными в конце:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}