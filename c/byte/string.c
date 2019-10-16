#include <stdio.h>

int main() {
    int enter = 0, tab = 0, space = 0;
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            enter++;
        }
        if (ch == ' ') {
            space++;
        }
        if (ch == '\t') {
            tab++;
        }
    }
    printf("\nNumber of enters: %d\n", enter);
    printf("Number of spaces: %d\n", space);
    printf("Number of tabs: %d\n", tab);
}
