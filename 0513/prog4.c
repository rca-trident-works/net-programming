#include <stdio.h>

int main(int argc, char *argv[]) {
  long total = 0;
  while (1) {
    int input = 0;
    printf("Enter a number (0 to quit): ");
    scanf("%d", &input);
    if (input == 0) {
      break;
    } else {
      total += input;
    }
  }

  printf("The total is %ld\n", total);
}
