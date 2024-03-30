#include <stdio.h>

void printNumbers(int a, int b) {
    if (a == b) {
        printf("%d ", a);
        return;
    } else if (a < b) {
        printf("%d ", a);
        printNumbers(a + 1, b);
    } else {
        printf("%d ", a);
        printNumbers(a - 1, b);
    }
}

int main() {
    int num1 = 7;
    int num2 = 2;
    printf("Числа от %d до %d:\n", num1, num2);
    printNumbers(num1, num2);
    printf("\n");
    
    return 0;
}