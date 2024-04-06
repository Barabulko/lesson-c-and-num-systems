#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    printf("Введите 5 элементов массива:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = (float)sum / 5;
    printf("Среднее арифметическое элементов массива: %.2f\n", average);

    return 0;
}