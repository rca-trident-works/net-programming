#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a = 10, b = 20;
    int temp;

    printf("a:%d , b:%d\n", a, b);
    // 入れ替え処理
    temp = a;
    a = b;
    b = temp;

    printf("a:%d , b:%d\n", a, b);

    return 0;
}
