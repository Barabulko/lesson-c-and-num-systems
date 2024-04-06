#include <stdio.h>

int main() {
    int arr[5];
    int min;

    printf("Введите 5 элементов массива:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (i == 0 || arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Минимальный элемент массива: %d\n", min);

    return 0;
}