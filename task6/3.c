#include <stdio.h>

int countOnesInBinary(int n) {
    if (n == 0) {
        return 0; 
    }

    return (n % 2 == 1) + countOnesInBinary(n / 2);
}

int main() {
    int number = 13;
    printf("Количество единиц в двоичной записи числа %d: %d\n", number, countOnesInBinary(number));
    
    return 0;
}