#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char str1[]      = "Hello";
    char str2[]      = "World";
    char concat[100] = {0};  // 結果を入れる配列

    // str1 を concat にコピー
    strcpy(concat, str1);
    // strcat(concat, str1); // 初回の場合、同じ意味になる

    // str2 を concat にコピー
    strcat(concat, str2);

    printf("concat : %s\n", concat);

    return 0;
}
