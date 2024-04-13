#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void task(FILE *input, FILE *output) {
    char c;
    int is_space = 0;
    while (isspace(c = fgetc(input))) {}
    fputc(c, output);
    while ((c = fgetc(input)) != EOF) {
        if (isspace(c)) {
            if (is_space == 0) {
                fputc(' ', output);
            }
            is_space = 1;
        } else {
            fputc(c, output);
            is_space = 0;
        }
    }
}