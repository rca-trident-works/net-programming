#include <stdio.h>

void lower_str(char str[]);

int main(int argc, char const *argv[]) {
    char str[] = "HELLO, World!";

    lower_str(str);

    return 0;
}

/**
 * @brief 文字列を小文字に変換する
 * 
 * @param str 
 */
void lower_str(char str[]) {

    int  i = 0;
    char c;
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            c = str[i] + ('a' - 'A');
        } else {
            c = str[i];
        }
        printf("%c", c);
    }
    printf("\n");
}
