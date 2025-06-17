#include <stdio.h>

int main(int argc, char const *argv[]) {
    int x = 3;

    if (x > 5) {
        printf("xは5より大きいです\n");
    } else {
        printf("xは5以下です\n");
    }

    printf("if-else文の後に実行されます\n");

    return 0;
}
