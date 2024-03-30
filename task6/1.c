#include <stdio.h>

void printDigits(int n) {
    if (n == 0) {
        return;
    }

    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int number = 54321;
    printf("Цифры числа %d в прямом порядке:\n", number);
    printDigits(number);
    printf("\n");
    
    return 0;
}