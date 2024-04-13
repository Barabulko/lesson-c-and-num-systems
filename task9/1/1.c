#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void task1(FILE *input, FILE *output) {
    char word1[100], word2[100];
    fscanf(input, "%s %s", word1, word2);

    int char_count1[256] = {0};
    for (int i = 0; i < strlen(word1); i++) {
        char_count1[word1[i]]++;
    }

    int char_count2[256] = {0};https://www.onlinegdb.com/online_c_compiler#_editor_8365040821
    for (int i = 0; i < strlen(word2); i++) {
        char_count2[word2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if ((char_count1[i] == char_count2[i]) & (char_count1[i] == 1)) {
            fprintf(output, "%c ", i);
        }
    }
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    task1(input, output);

    fclose(input);
    fclose(output);

    return 0;
}