#include <stdio.h>

#define MAX_LENGTH 1000
#define EOS '\0'
#define EOL '\n'

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
