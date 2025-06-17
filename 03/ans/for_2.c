#include <stdio.h>

int main(int argc, char const *argv[]) {
    int i = 0;

    for (;;) {
        // if (i++ >= 5) {
        //     break;
        // }
        printf("%d回目のループです\n", ++i);
    }

    printf("for文の後に実行されます\n");

    return 0;
}
