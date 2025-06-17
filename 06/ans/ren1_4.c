#include <stdio.h>

void pconcat(char *, char *, char *);

int main(int argc, char const *argv[]) {
    char str1[] = "Hello";
    char str2[] = "World";
    char concat[100]; // 結果を入れる配列

    pconcat(concat, str1, str2);

    printf("pconcat : %s\n", concat);

    return 0;
}

void pconcat(char *result, char *str1, char *str2) {
    // str1 を result にコピー（\0はコピーしない）
    while (*str1)
        *result++ = *str1++;

    // str2 を result にコピー
    while (*result++ = *str2++)
        ;

    // while (*str2)
    //     *result++ = *str1++;
    // 終端記号を付加
    // *result = '\0';
}
