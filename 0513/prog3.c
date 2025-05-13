#include <stdio.h>

int main(int argc, char *argv[]) {
  int input = 0;

  printf("Enter a number: ");
  scanf("%d", &input);

  long factorial = 1;
  for (int i = 1; i <= input; i++) {
    factorial *= i;
  }

  printf("The factorial of %d is %ld\n", input, factorial);
  return 0;
}
