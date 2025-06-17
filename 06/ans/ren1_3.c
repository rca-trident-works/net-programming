#include <stdio.h>

void fconcat(char[], char[], char[]);

int main(int argc, char const *argv[]) {
    char str1[] = "Hello";
    char str2[] = "World";
    char concat[100]; // 結果を入れる配列

    fconcat(concat, str1, str2);

    printf("fconcat : %s\n", concat);

    return 0;
}

void fconcat(char result[], char str1[], char str2[]) {
    int j = 0; // result[j]の添字
    // str1 を result にコピー
    for (int i = 0; str1[i] != '\0'; i++, j++) {
        result[j] = str1[i];
    }
    // str2 を result にコピー
    for (int i = 0; str2[i] != '\0'; i++, j++) {
        result[j] = str2[i];
    }
    // 終端記号を付加
    result[j] = '\0';
}
