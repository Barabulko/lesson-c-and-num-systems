#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int main() {
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int shift = 4;

    rightRotate(arr, 12, shift);

    printf("Массив после циклического сдвига ВПРАВО на %d элемента(ов):\n", shift);
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}