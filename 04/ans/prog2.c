#include <stdio.h>
#include <math.h>
#include <limits.h>

#define MAX_TEST_CASES 4
#define ERROR_INVALID_INPUT -1

int sum(int);

/**
 * @brief 与えられた数までの合計を求める
 * 
 * @param num 正の整数
 * @return int 合計値。エラーの場合はERROR_INVALID_INPUT
 */
int sum(int num) {
    // 入力値のバリデーション
    if (num <= 0) {
        return ERROR_INVALID_INPUT;
    }

    // オーバーフローを防ぐための最低限のチェック
    if (num > sqrt(INT_MAX) / 2) {
        return ERROR_INVALID_INPUT;
    }

    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

int main(int argc, char const *argv[]) {
    int test_numbers[MAX_TEST_CASES] = {5, 10, -5, 100000};
    
    for (int i = 0; i < MAX_TEST_CASES; i++) {
        int result = sum(test_numbers[i]);
        if (result == ERROR_INVALID_INPUT) {
            printf("入力値 %d は無効です。正の整数を入力してください。\n", test_numbers[i]);
        } else {
            printf("自然数 %d までの合計は %d です\n", test_numbers[i], result);
        }
    }

    return 0;
}
