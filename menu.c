#include <stdio.h>

int main() {
  char c;
  int done;
  done = 0;
  float total;
  total = 0;

  printf("Please make your treat selections:\n");
  printf("*1 - Beverage\t$8.00.\n");
  printf("*2 - Candy\t$5.50.\n");
  printf("*3 - Hot dog\t$10.00.\n");
  printf("*4 - Popcorn\t$7.50.\n");
  printf("*(Enter) - Total\n");
  printf("*= - Done.\n");
  printf("Your choices:");
  while(!done) {
    c = getchar();
    switch(c) {
      case '1':
        printf("Beverage\t$8.00\n");
        total += 8;
        break;
      case '2':
        printf("Candy\t$5.50\n");
        total += 5.5;
        break;
      case '3':
        printf("Hot dog\t$10.00\n");
        total+=10;
        break;
      case '4':
        printf("Popcorn\t$7.50\n");
        total+=7.5;
        break;
      case '/n':
        printf("Total of $%.2f\n", total);
        printf("Anything else?:");
        break;
      case '=':
        printf("Total of $%.2f\n", total);
        printf("Please pay the cashier.\n");
        done = 1;
        break;
      default:
        printf("Imporper selection.\n");
    }
  }
  return(0);
}