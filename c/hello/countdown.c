#include <stdio.h>

int main() {
  int start;
  unsigned long delay;
  
  do{
    printf("Please, enter the number to start the countdown (100 to 1):\n");
    scanf("%d", &start);
  }
  while(start < 1 || start > 100);

  do{
    printf("%d\n", start);
    start--;
    delay = 0;
    while(delay < 400000000) {
      delay++;
    }
  }
  while(start > 0);
  printf("Zero!\nBlast off!\n");
  return(0);
}
