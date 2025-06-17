#include <stdio.h>

int main(int argc, char const *argv[]) {
    char ch;

    printf("1文字入力してください：");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'A') {
        printf("aかAが入力されました。\n");
    } else if (ch == 'b' || ch == 'B' || ch == 'c' || ch == 'C') {
        printf("b,B,c,Cのどれかが入力されました。\n");
    } else {
        printf("a,b以外の文字が入力されました。\n");
    }

    return 0;
}
