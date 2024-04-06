#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a % 10) - (*(int*)b % 10);
}

int main() {
    int arr[10];

    printf("Введите 10 элементов массива:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, 10, sizeof(int), compare);

    printf("Отсортированный массив по последней цифре:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}