#include <stdbool.h>  // C99以降で、bool型を使う場合に必要
#include <stdio.h>

int main(int argc, char const *argv[]) {
    bool a = true;   // bool型を使う場合
    int  b = false;  // int型を使う場合

    if (a) {
        printf("a is true\n");
    }

    if (b) {
        printf("b is true\n");
    }

    return 0;
}