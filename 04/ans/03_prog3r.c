#include <stdio.h>

long factorial(int);

/*
    階乗を求める数学的な定義
    n! = n * (n-1)!
    0! = 1
*/
long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(int argc, char const *argv[]) {
    int in;

    printf("求めたい数字を入力してください：");
    scanf("%d", &in);

    printf("%dの階乗は%ldです\n", in, factorial(in));
    return 0;
}