#include <stdio.h>

int is_two_same(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1; // Есть дубликаты
            }
        }
    }
    return 0; // Нет дубликатов
}

int main() {
    int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    
    if (is_two_same(n, a)) {
        printf("Есть два одинаковых элемента в массиве.\n");
    } else {
        printf("Нет одинаковых элементов в массиве.\n");
    }

    return 0;
}