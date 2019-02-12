#include <stdio.h>
int main(){
    int enter, tab, space = 0;
    int c, t, p;
    while((c = getchar()) != EOF) {
        if (c == '\n') {
            ++enter;
        }
        if(c  == ' ') {
            ++space;
        }
        if(c == '\t') {
            ++tab;
        }
    }
    printf("\nNumber of enters: ");
    printf("%d\n", enter);
    printf("Number of spaces: ");
    printf("%d\n", space);
    printf("Number of tabs: ");
    printf("%d\n", tab);
}
