#include <stdio.h>

#define FALSE 0
#define TRUE  !0

int main(int argc, char const *argv[]) {
    int a = TRUE;
    int b = FALSE;

    if (a) {
        printf("a is true\n");
    }

    if (b) {
        printf("b is true\n");
    }

    return 0;
}