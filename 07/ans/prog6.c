#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(void);

int main(int argc, char const *argv[]) {

    if (argc != 4) {
        usage();
    }

    int num1, num2;
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    if (strcmp(argv[1], "add") == 0) {
        printf("add: %d+%d=%d\n", num1, num2, num1 + num2);
    } else if (strcmp(argv[1], "sub") == 0) {
        printf("sub: %d-%d=%d\n", num1, num2, num1 - num2);
    } else if (strcmp(argv[1], "mul") == 0) {
        printf("mul: %d*%d=%d\n", num1, num2, num1 * num2);
    } else if (strcmp(argv[1], "div") == 0) {
        if(num2!=0){
            printf("div: %d/%d=%d\n", num1, num2, num1 / num2);
        }else{
            printf("0で割ることはできません。\n");
        }
    } else {
        usage();
    }

    return 0;
}
void usage(void) {
    printf("引数を正しく与えてください\n");
    printf("使い方：./a.out ope 20 30\n");
    printf("ope：add | sub | mul | div\n");
    exit(1);
}
