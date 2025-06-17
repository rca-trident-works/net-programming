#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int  str2int(char const *);
void usage(void);

int main(int argc, char const *argv[]) {
    int a, b;

    if (argc != 3) {
        usage();
    }

    a = str2int(argv[1]);
    b = str2int(argv[2]);

    printf("%d+%d=%d\n", a, b, a + b);

    return 0;
}
void usage(void) {
    printf("引数に整数を2つ与えてください\n");
    printf("使い方：./add 10 20\n");
    exit(1);
}
int str2int(char const *str) {
    int num  = 0;
    int sign = 0;

    if (*str == '+') {
        sign = 1;  // 正の数値
        str++;
    } else if (*str == '-') {
        sign = -1;  // 負の数値
        str++;
    } else {
        sign = 1;  // 数字から始まる場合は正の数値
    }

    while (*str) {
        num *= 10;
        if (isdigit(*str)) {
            num += *str - '0';
        } else {
            ;
            // 今回は数字以外は0とみなす
            // printf("数字以外は処理できません");
            // exit(1);
        }
        str++;
    }

    num *= sign;  // 符号の調整

    return num;
}