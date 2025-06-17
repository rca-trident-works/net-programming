#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[10];

    printf("文字列を入力してください：");

    scanf("%s", str);

    printf("入力された文字列は：%s\n", str);
    return 0;
}
