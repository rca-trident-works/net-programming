#include <stdio.h>

int char2int(char);

int main(int argc, char const *argv[]) {
    char ch_a, ch_b;

    printf("1桁の数字を入力してください（1つ目）:");
    scanf("%c", &ch_a);
    printf("1桁の数字を入力してください（2つ目）:");
    scanf("\n%c", &ch_b);

    printf("%c+%c=%d\n", ch_a, ch_b, char2int(ch_a) + char2int(ch_b));
    return 0;
}

int char2int(char ch) {
    if ('0' <= ch && ch <= '9') {
        return ch - '0';
    }

    return 0;
}