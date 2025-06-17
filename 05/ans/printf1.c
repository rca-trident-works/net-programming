#include <stdio.h>

int main(int argc, char const *argv[]) {
    char str[] = "Hello World";

    // 1文字ずつ出力
    for (int i = 0; i < sizeof(str); i++) {
        printf("str[%02d] : (0x%02x) %c\n", i, str[i], str[i]);
    }
    // 文字列として出力
    printf("str : %s\n", str);

    return 0;
}
