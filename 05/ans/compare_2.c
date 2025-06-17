#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char str1[] = "ABC";
    char str2[] = "ABCD";
    bool match  = true;

    match = (strcmp(str1, str2) == 0);

    if (match) {
        printf("文字列は一致しています\n");
    } else {
        printf("文字列は一致していません\n");
    }

    return 0;
} 