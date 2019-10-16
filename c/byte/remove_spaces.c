# include <stdio.h>

int main() {
    int current, previous = EOF;

    while((current = getchar()) != EOF) {
        if (current != ' ' || previous != ' ') {
            putchar(current);
        }
        previous = current;
    }
}
