#include <stdio.h>
#include <stdlib.h>

void usage(void);

int main(int argc, char const *argv[]) {

    if (argc == 1) {
        usage();
    }

    for (int i = argc - 1; i > 0; i--) {
        printf("argc:%d  argv:%s\n", i, argv[i]);
    }

    return 0;
}
void usage(void) {
    printf("引数に値を与えてください\n");
    printf("使い方：./a.out abc 20...\n");
    exit(1);
}
