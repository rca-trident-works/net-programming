#include <stdbool.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    char str1[] = "ABC";
    char str2[] = "ABCD";
    int  match  = true;  // bool

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            match = false;
            break;
        }
    }

    if (match) {
        printf("文字列は一致しています\n");
    } else {
        printf("文字列は一致していません\n");
    }

    return 0;
}
