#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void task(FILE *input, FILE *output) {
    char c1, c2;
    while ((c1 = fgetc(input)) != EOF) {
        if ((c2 = fgetc(input)) != EOF) {
            if (isspace(c2)) {
                char c3 = fgetc(input);
                fputc(c3, output);
                fputc(c2, output);
                fputc(c1, output);
            } else {
                fputc(c2, output);
                fputc(c1, output);
            }
        } else {
            fputc(c1, output);
        }
    }
}