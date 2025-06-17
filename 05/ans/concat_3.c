#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char str1[]      = "Hello";
    char str2[]      = "World";
    char concat[100] = {0};  // 結果を入れる配列

    // str1,str2 を concat に代入
    sprintf(concat, "%s%s", str1, str2);

    printf("concat : %s\n", concat);

    return 0;
}
