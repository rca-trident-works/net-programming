#include <stdio.h>
#include <stdlib.h>

void usage(void);
void func_a(void);
void func_b(void);

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        usage();
    } else {
        char opt = argv[1][0];
        // char opt = *argv[1];
        switch (opt) {
        case 'a':
            func_a();
            break;
        case 'b':
            func_b();
            break;
        default:
            usage();
            break;
        }
    }
    return 0;
}

void usage(void) {
    printf("aもしくはbを与えてください\n");
    printf("使い方：./a.out a | b\n");
    exit(1);
}

void func_a(void) {
    printf("Called func_a()\n");
}

void func_b(void) {
    printf("Called func_b()\n");
}
