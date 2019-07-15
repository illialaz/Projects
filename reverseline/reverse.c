#define EOS '\0'

void reverse(char from[], char to[], int len) {
    for(int i = 0; i < len; i++) {
        to[i] = from[len - 1 - i];
    }
    to[len] = EOS;
}
