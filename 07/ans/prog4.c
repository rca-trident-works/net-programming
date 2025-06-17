#include <stdio.h>

int str2int(char *);

int main(int argc, char const *argv[]) {
    char str1[20] = "12345";
    char str2[20] = "+12345";
    char str3[20] = "-12345";

    printf("%s => %d\n", str1, str2int(str1));
    printf("%s => %d\n", str2, str2int(str2));
    printf("%s => %d\n", str3, str2int(str3));

    return 0;
}

int str2int(char *str) {
    int sign = 0;  // 符号を表す

    if (*str == '+') {
        sign = 1;  // 正の数値
        str++;     // +の次に進める
    } else if (*str == '-') {
        sign = -1;  // 負の数値
        str++;      // -の次に進める
    } else {
        sign = 1;  // 数字から始まる場合は正の数値
    }

    int num = 0;
    while (*str) {
        num *= 10;
        if ('0' <= *str && *str <= '9') {
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