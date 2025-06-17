#include <stdio.h>

char lower_c(char str);

int main(int argc, char const *argv[]) {
    char str[] = "HELLO, World!";

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", lower_c(str[i]));
    }
    printf("\n");
    return 0;
}

/**
 * @brief 文字を受け取り小文字に変換する
 * 
 * @param str 
 * @return char 
 */
char lower_c(char str) {
    char c;
    if ('A' <= str && str <= 'Z') {
        c = str + ('a' - 'A');
        // c = str + 0x20;
        // c = str + 32;
    } else {
        c = str;
    }
    return c;
}
