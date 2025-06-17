#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num;

    printf("数字を入力してください：");
    scanf("%d", &num);

    switch (num) {
    case 1:
        printf("1が入力されました。\n");
        break;
    case 2:
        printf("2が入力されました。\n");
        break;
    case 3:
        printf("3が入力されました。\n");
        break;
    default:
        printf("1~3以外の数字が入力されました。\n");
        break;
    }

    return 0;
}