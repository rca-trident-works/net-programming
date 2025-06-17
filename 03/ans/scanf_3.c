// scanfをfgetsに置き換えた例
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[10];

    printf("文字列を入力してください：");

    // fgetsで安全に入力を受け取る
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // 入力文字列に改行が含まれていれば削除する
        str[strcspn(str, "\n")] = '\0';
    }

    printf("入力された文字列は：%s\n", str);
    return 0;
}
