#include <stdio.h>

int findMax(int *arr, int size);

int main(void) {
  int numbers [] = {5, 2, 9, 1, 7};
  int size = sizeof(numbers) / sizeof(int);

  int max = findMax(numbers, size);

  printf("The maximum number is: %d\n", max);

  return 0;
}

int findMax(int *arr, int size) {
  int max = arr[0];

  for (int i = 1; i < size; i++) {
    if (*(arr + i) > max) {
      max = *(arr + i);
    }
  }

  return max;
}
