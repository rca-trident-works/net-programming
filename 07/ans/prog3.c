#include <stdio.h>

int str2int(char *);

int main(int argc, char const *argv[]) {
    char str[20];

    printf("数字を入力してください:");
    scanf("%s", str);

    printf("%s => %d\n", str, str2int(str));
    return 0;
}

int str2int(char *str) {
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
        // 次の文字に進む
        str++;
    }
    return num;
}