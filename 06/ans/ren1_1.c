#include <stdio.h>

void lower_c(char *str);

int main() {
    char str[] = "HELLO, World!";

    printf("before:%s\n", str);
    lower_c(str);
    printf("after :%s\n", str);

    return 0;
}

/**
 * @brief 配列として処理する例
 * 
 */
void lower_c(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += ('a' - 'A');
        }
    }
}

/**
 * @brief 配列風にポインタを使用する例
 * 
 * @param str 
 */
void lower_c(char *str) {
    for (int i = 0; *(str + i) != '\0'; i++) {
        if ('A' <= *(str + i) && *(str + i) <= 'Z') {
            *(str + i) += ('a' - 'A');
        }
    }
}

/**
 * @brief forでポインタを操作する例
 * 
 * @param str 
 */
void lower_c(char *str) {
    for (; *str ; str++) {
        //↑一般的な書き方 意味としては→ for (; *str != '\0'; str++) {
        if ('A' <= *str && *str <= 'Z') {
            *str += ('a' - 'A');
        }
    }
}

/**
 * @brief whileでポインタを操作する例
 * 
 * @param str 
 */
void lower_c(char *str) {
    while (*str) {
        // ↑一般的な書き方 意味としては→while (*str != '\0') {
        if ('A' <= *str && *str <= 'Z') {
            *str += ('a' - 'A');
        }
        str++;
    }
}

