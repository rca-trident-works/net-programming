#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num, i;
    long long factorial = 1;  // 階乗の値は大きくなる可能性があるため、long long型を使用

    printf("階乗を計算します。0以上の整数を入力してください：");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("0以上の整数を入力してください。\n");
        return 1;
    }

    // 0の階乗は1
    if (num == 0) {
        printf("0! = 1\n");
        return 0;
    }

    // 階乗の計算
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("%d! = %lld\n", num, factorial);

    return 0;
} 