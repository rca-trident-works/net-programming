#include <stdio.h>

void incrementArray(int *, int);

int main(int argc, char const *argv[]) {
    int numbers[] = {1, 2, 3, 4, 5};
    int size      = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    incrementArray(numbers, size);

    printf("After : ");
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