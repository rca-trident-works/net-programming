#include <stdio.h>

float add(int a, int b);    // プロトタイプ宣言

int main(int argc, char const *argv[]) {
    int x = 10, y = 20;
    int z;

    z = add(x, y);
    printf("%d + %d = %d\n", x, y, z);
    return 0;
}

float add(int a, int b) {
    return a + b;
}
