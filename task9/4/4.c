#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void task4(FILE *input, FILE *output) {
    char line[1001];
    fgets(line, 1001, input);

    int seen[256] = {0};
    for (int i = 0; i < strlen(line); i++) {
        if (!isspace(line[i]) && seen[line[i]] == 0) {
            seen[line[i]] = 1;
            fputc(line[i], output);
        }
    }
}

void swap_chars(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    task4(input, output);

    fclose(input);
    fclose(output);

    return 0;
}