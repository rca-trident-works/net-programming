#include <stdio.h>

int main(int argc, char const *argv[]) {
    char str1[] = "Hello";
    char result[100];  // 結果を入れる配列
    int  j = 0;        // result[j]の添字

    // str1 を ループで1個ずつ代入
    for (j = 0; j < sizeof(str1); j++) {
        result[j] = str1[j];
    }
    printf("result : %s\n", result);

    return 0;
}
