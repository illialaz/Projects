#include <stdio.h>

#define MAX_LENGTH 1000
#define EOS '\0'
#define EOL '\n'

void copy(char from[], char to[]) {
    int i = 0;
    while (from[i] != EOS) {
        to[i] = from[i];
        i++;
    }
    to[i] = EOS;
}

int get_line(char str[]) {
    int i = 0;
    int ch = getchar();

    while (ch != EOF && ch != EOL && i < MAX_LENGTH - 1) {
        str[i] = ch;
        ch = getchar();
        i++;
    }
    str[i] = EOS;
    return i;
}

int main() {
    char cur_line[MAX_LENGTH];
    char max_line[MAX_LENGTH] = "";
    int cur_length = get_line(cur_line);
    int max_length = 0;

    while (cur_length) {
        if (cur_length > max_length) {
            max_length = cur_length;
            copy(cur_line, max_line);
        }
        cur_length = get_line(cur_line);
    }
    printf("\nMax line is: %s\n", max_line);
    return 0;
}
