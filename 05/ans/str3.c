#include <stdio.h>

int main(int argc, char const *argv[]) {
    char str1[] = "abcde";
    char str2[][7] = {"abcde", "012", "xyz123"};

    printf("sizeof str1:%ld\n", sizeof(str1));
    printf("sizeof str2:%ld\n", sizeof(str2));

    return 0;
}
