#include <stdio.h>
#include <limits.h>
 
int main(void){
    printf("Type                Size      Min                  Max\n-----------------------------------------------------------------------\n");
    printf("%-20s%-10d%-21ld%-20ld\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-20s%-10d%-21u%-20u\n", "unsigned char", sizeof(char), 0, UCHAR_MAX);
    printf("%-20s%-10d%-21d%-20d\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("%-20s%-10d%-21u%-20u\n", "unsigned short", sizeof(short), 0, USHRT_MAX);
    printf("%-20s%-10d%-21d%-20d\n", "int", sizeof(int), INT_MIN, INT_MAX);
    printf("%-20s%-10d%-21u%-20u\n", "unsigned int", sizeof(int), 0, UINT_MAX);
    printf("%-20s%-10d%-21ld%-20ld\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
    printf("%-20s%-10d%-21lu%-20lu\n", "unsigned long", sizeof(long), 0, ULONG_MAX);
    return 0;
}
