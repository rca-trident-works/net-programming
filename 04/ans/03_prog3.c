#include <stdio.h>

long factorial(int);

long factorial(int n) {
    long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main(int argc, char const *argv[]) {
    int in;

    printf("求めたい数字を入力してください：");
    scanf("%d", &in);

    printf("%dの階乗は%ldです\n", in, factorial(in));
    return 0;
}