#include <stdio.h>

int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 36;
    int num2 = 48;
    int result = nod(num1, num2);
    printf("Наибольший общий делитель чисел %d и %d равен %d\n", num1, num2, result);
    
    return 0;
}