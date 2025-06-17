#include <stdio.h>

int main(int argc, char const *argv[]) {
    int i;

    printf("1から10までの偶数を表示します\n");
    
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
} 