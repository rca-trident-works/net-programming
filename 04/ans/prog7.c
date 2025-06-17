#include <stdio.h>

float reciprocal(int n)
{
    if (n == 1) {
        return 1.0;
    } else {
        return 1.0 / n + reciprocal(n - 1);
        // return 1 / (float)n + reciprocal(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("整数nを入力してください：");
    scanf("%d", &num);
    printf("%dまでの逆数の和は%fです。\n", num, reciprocal(num));
    return 0;
}
