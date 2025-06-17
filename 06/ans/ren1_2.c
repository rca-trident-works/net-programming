#include <stdio.h>

int my_strlen(char *);

int main(int argc, char const *argv[]) {
    char string[] = "Hello";

    printf("%s は %d文字\n", string, my_strlen(string));
    return 0;
}

int my_strlen(char *str) {
    int n = 0;
    while (*str++) {
        n++;
    }
    return n;
}