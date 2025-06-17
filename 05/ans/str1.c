#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch = 'a';
    // char str[] = "a";
    char str[] = {'a', '\0'};

    printf("文字：%c\n", ch);
    printf("文字列：%s\n", str);

    return 0;
}
