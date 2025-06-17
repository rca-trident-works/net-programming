#include <stdio.h>

int sum(int);

/**
 * @brief 与えられた数までの合計を求める
 * 
 * @param num 
 * @return int 
 */
int sum(int num) {
    int sum = 0;

    if(num<=0) return 0;
    while (num) {
        sum += num--;
    }

    return sum;
}

int main(int argc, char const *argv[]) {
    int num = 5;
    printf("自然数 %d までの合計は %d です\n", num, sum(num));

    num = 10;
    printf("自然数 %d までの合計は %d です\n", num, sum(num));

    num = -5;
    printf("自然数 %d までの合計は %d です\n", num, sum(num));

    return 0;
}
