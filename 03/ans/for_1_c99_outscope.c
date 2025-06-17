#include <stdio.h>

int main(int argc, char const *argv[]) {

    for (int i = 1; i <= 5; i++) {
        printf("%d回目のループです\n", i);
    }

    printf("i=%d\n", i); // ここでエラーが発生します
    printf("for文の後に実行されます\n");

    return 0;
}
