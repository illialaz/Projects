#include <stdio.h>

int main(){
  int a;
  char b;

  for(a = 0; a < 10; a++){
    for(b = 'A'; b < 'K'; b++){
      printf("%d-%c ",a,b);
    }
    putchar('\n');
  }
  return(0);
}