#include <stdio.h>
#include <stdlib.h>

void usage(void);

int main(int argc, char const *argv[]) {
    int a, b;

    if (argc != 3) {
        usage();
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d+%d=%d\n", a, b, a + b);

    return 0;
}
void usage(void) {
    printf("引数に整数を2つ与えてください\n");
    printf("使い方：./add 10 20\n");
    exit(1);
}
