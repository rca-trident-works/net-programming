#include <stdio.h>

void reverse(char str[], int len);

int main(int argc, char const *argv[]) {
    char str[] = "Hello, World!";
    int  len   = 0;

    while (str[len++]) {
        ;
    }

    reverse(str, len);
    printf("\n");

    return 0;
}

/**
 * @brief 文字列を逆順に出力する
 * 
 * @param str 
 * @param len 
 */
void reverse(char str[], int len) {
    for (int i = len; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
