#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "task10.h"

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    task(input, output);

    fclose(input);
    fclose(output);

    return 0;
}
