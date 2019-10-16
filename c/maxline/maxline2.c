#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    size_t bufsize = MAX_LENGTH;
    char* cur_line = malloc(MAX_LENGTH);
    char* max_line = malloc(MAX_LENGTH);
    int cur_length = getline(&cur_line, &bufsize, stdin);
    int max_length = 0;

    while (cur_length > 0) {
        if (cur_length > max_length) {
            max_length = cur_length;
            strcpy(max_line, cur_line);
        }
        cur_length = getline(&cur_line, &bufsize, stdin);
    }
    printf("\nMax line is: %s\n", max_line);
    return 0;
}
