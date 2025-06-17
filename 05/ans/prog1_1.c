#include <stdio.h>

void reverse(char str[]);

int main(int argc, char const *argv[]) {
    char str[] = "Hello, World!";

    reverse(str);
    printf("\n");

    return 0;
}

/**
 * @brief 文字列を逆順に出力する
 * 
 * @param str 
 */
void reverse(char str[]) {
    int len = 0;
    // 文字列の長さをカウント
    while (str[len] != '\0') {
        len++;
    }
    // 文字列の長さをカウント（別解）
    // while (str[len] != '\0') {
    //     len++;
    // }

    for (int i = len; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
