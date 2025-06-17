#include <stdio.h>

void lower_str(char str[]);
char lower_c(char str);

int main(int argc, char const *argv[]) {
    char str[] = "HELLO, World!";

    lower_str(str);

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
    } else {
        c = str;
    }
    return c;
}

/**
 * @brief 文字列を小文字に変換する
 * 
 * @param str 
 */
void lower_str(char str[]) {

    int  i = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", lower_c(str[i]));
    }
    printf("\n");
}
