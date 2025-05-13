#include <stdio.h>

int main(int argc, char *argv[]) {
  int input = 0;
  printf("Enter a number: ");
  scanf("%d", &input);

  int is_prime = 1;

  if (input < 2) {
    is_prime = 0;
  } else {
    for (int i = 2; i * i <= input; i++) {
      if (input % i == 0) {
        is_prime = 0;
        break;
      }
    }
  }

  if (is_prime) {
    printf("%d is a prime number.\n", input);
  } else {
    printf("%d is not a prime number.\n", input);
  }

  return 0;
}
