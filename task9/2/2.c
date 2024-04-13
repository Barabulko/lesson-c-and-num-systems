#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void task2(FILE *input, FILE *output) {
    char c;
    while ((c = fgetc(input)) != EOF) {
        if (c == 'a') {
            fputc('b', output);
        } else if (c == 'A') {
            fputc('B', output);
        } else if (c == 'b') {
            fputc('a', output);
        } else if (c == 'B') {
            fputc('A', output);
        } else {
            fputc(c, output);
        }
    }
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    task2(input, output);

    fclose(input);
    fclose(output);

    return 0;
}