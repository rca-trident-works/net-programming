#include <stdio.h>

int main(int argc, char const *argv[]) {
    char ch;

    printf("1文字入力してください：");
    scanf("%c", &ch);

    switch (ch) {
    case 'a':
    case 'A':
        printf("aかAが入力されました。\n");
        break;
    case 'b':
    case 'B':
    case 'c':
    case 'C':
        printf("b,B,c,Cのどれかが入力されました。\n");
        break;
    default:
        printf("a,b以外の文字が入力されました。\n");
        break;
    }

    return 0;
}