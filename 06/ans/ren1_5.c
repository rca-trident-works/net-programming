#include <stdio.h>

char *my_strcat(char *, char *);

int main(int argc, char const *argv[]) {
    char str1[100] = "Hello";
    char str2[]    = "World";

    // my_strcat(str1, str2);

    printf("my_strcat : %s\n", my_strcat(str1, str2));

    return 0;
}

char *my_strcat(char *str1, char *str2) {
    // 元のstr1のアドレスを保存
    char *p = str1;

    // str1 の末尾まで移動
    while (*str1)
        str1++;

    // str2 を str1 の末尾に追加
    while (*str1++ = *str2++)
        ;
    return p;
}