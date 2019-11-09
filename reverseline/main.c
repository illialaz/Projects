#include <stdio.h>

#define MAX_LENGTH 1000

void reverse(char from[], char to[], int len);
int get_line(char str[]);

int main() {
    char cur_line[MAX_LENGTH];
    char max_line[MAX_LENGTH] = "";
    int cur_length = get_line(cur_line);
    int max_length = 0;

    while (cur_length) {
        if (cur_length > max_length) {
            max_length = cur_length;
            reverse(cur_line, max_line, &cur_length);
        }
        cur_length = get_line(cur_line);
    }
    printf("\nMax line is: %s\n", max_line);
    return 0;
}
