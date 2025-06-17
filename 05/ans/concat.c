#include <stdio.h>

int main(int argc, char const *argv[]) {
    char str1[] = "Hello";
    char str2[] = "World";
    char concat[100];  // 結果を入れる配列
    int  j = 0;        // concat[j]の添字

    // str1 を concat にコピー
    for (int i = 0; str1[i] != '\0'; i++, j++) {
        concat[j] = str1[i];
    }
    // str2 を concat にコピー
    for (int i = 0; str2[i] != '\0'; i++, j++) {
        concat[j] = str2[i];
    }
    // 終端記号を付加
    concat[j] = '\0';
    printf("concat : %s\n", concat);

    return 0;
}
