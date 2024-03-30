#include <stdio.h>

int is_happy_number(int n) {
    int digit_sum = 0;
    int digit_product = 1;
    int temp = n;
    
    while (temp != 0) {
        int digit = temp % 10;
        digit_sum += digit;
        digit_product *= digit;
        temp /= 10;
    }
    
    return digit_sum == digit_product;
}

int main() {
    int number = 123;
    
    if (is_happy_number(number)) {
        printf("%d - является 'веселым' числом\n", number);
    } else {
        printf("%d - не является 'веселым' числом\n", number);
    }
    
    return 0;
}