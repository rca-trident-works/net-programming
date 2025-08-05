#include <stdio.h>

void incrementArray(int *arr, int size);

int main() {
  int numbers[] = {1, 2, 3, 4, 5};
  int size = sizeof(numbers) / sizeof(int);

  printf("Before: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  incrementArray(numbers, size);

  printf("After: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}

void incrementArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    *(arr + i) += 1;
  }
}
