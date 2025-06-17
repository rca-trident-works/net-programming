#include <stdio.h>

void binary(int n) {
    if (n > 1) {
        binary(n / 2);
    }
    printf("%d", n % 2);
}

int main(int argc, char const *argv[]) {
    int num;
    printf("整数nを入力してください：");
    scanf("%d", &num);
    printf("%dの二進数表現は: ", num);
    binary(num);
    printf("\n");
    return 0;
}
