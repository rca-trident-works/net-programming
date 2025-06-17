#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char str1[] = "Hello";
    char result[100];  // 結果を入れる配列
    int  j = 0;        // result[j]の添字

    // str1 を 関数で代入
    strcpy(result, str1);

    printf("result : %s\n", result);

    return 0;
}
