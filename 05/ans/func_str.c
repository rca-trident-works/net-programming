#include <stdio.h>

void func_str(char[]);

int main(int argc, char const *argv[]) {
    char str[] = "Hello World!";

    printf("%s\n", str);

    func_str(str);

    printf("%s\n", str);

    return 0;
}

/**
 * @brief 文字列を受け取り、なにか処理する
 * 
 * @param str 
 */
void func_str(char str[]) {
    int i = 0;
    while (str[i]) {
        str[i++]++;
    }
}