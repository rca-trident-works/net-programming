#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num, i;
    int is_prime = 1;  // 1: 素数, 0: 素数でない

    printf("素数判定を行います。正の整数を入力してください：");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("正の整数を入力してください。\n");
        return 1;
    }

    // 1は素数ではない
    if (num == 1) {
        is_prime = 0;
    }
    // 2以上の数について判定
    else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%dは素数です。\n", num);
    } else {
        printf("%dは素数ではありません。\n", num);
    }

    return 0;
} 