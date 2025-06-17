#include <stdio.h>

int main(int argc, char const *argv[]) {
    if (argc <= 1) {
        printf("名前を引数として与えてください。\n");
        printf("使い方：./a.out YourNmae\n");
    } else {
        printf("あなたの名前は %s です。\n", argv[1]);
    }
    return 0;
}
