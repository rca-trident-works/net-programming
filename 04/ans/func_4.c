#include <stdio.h>

int fa(int a, int b) {
    return a + fx(b);
}

float fx(int a) {
    return a * 1.0;
}

int main(int argc, char const *argv[]) {
    int x = 10, y = 20;
    int z;

    z = fa(x, y);
    printf("%d + %d = %d\n", x, y, z);
    return 0;
}
