#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void task3(FILE *input, FILE *output) {
    char line[1001];
    fgets(line, 1001, input);

    int numbers[1000], count = 0;
    char *ptr = line;
    while (*ptr) {
        if (isdigit(*ptr)) {
            numbers[count++] = atoi(ptr);
            while (isdigit(*ptr)) {
                ptr++;
            }
        } else {
            ptr++;
        }
    }

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        fprintf(output, "%d ", numbers[i]);
    }
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    task3(input, output);

    fclose(input);
    fclose(output);

    return 0;
}