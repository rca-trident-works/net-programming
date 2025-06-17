#include <stdio.h>
#include <math.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0
#define MAX_TEST_CASES 5

/**
 * @brief 与えられた数が、素数かどうかを判定する
 *        素数の場合1, 非素数の場合0
 * 
 * @param n 判定する数
 * @return int 素数の場合はTRUE、非素数の場合はFALSE
 */
int is_prime(int n) {
    // 2未満の数は素数ではない
    if (n < 2) {
        return FALSE;
    }
    
    // 2は素数
    if (n == 2) {
        return TRUE;
    }
    
    // 偶数は2以外素数ではない
    if (n % 2 == 0) {
        return FALSE;
    }
    
    // 3から√nまでの奇数で割り切れるかチェック
    int sqrt_n = (int)sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) {
            return FALSE;
        }
    }
    
    return TRUE;
}

int main(int argc, char const *argv[]) {
    int test_numbers[MAX_TEST_CASES] = {2, 3, 4, 17, 100};
    
    printf("テストケースの実行結果：\n");
    for (int i = 0; i < MAX_TEST_CASES; i++) {
        printf("%d は%s\n", 
               test_numbers[i],
               is_prime(test_numbers[i]) ? "素数です" : "素数ではありません");
    }
    
    printf("\n新しい数値を入力してください（-1で終了）：");
    int input;
    while (1) {
        if (scanf("%d", &input) != 1) {
            printf("無効な入力です。整数を入力してください。\n");
            while (getchar() != '\n'); // 入力バッファをクリア
            continue;
        }
        
        if (input == -1) {
            break;
        }
        
        if (input < 0) {
            printf("正の整数を入力してください。\n");
            continue;
        }
        
        printf("%d は%s\n", 
               input,
               is_prime(input) ? "素数です" : "素数ではありません");
        
        printf("次の数値を入力してください（-1で終了）：");
    }
    
    return 0;
}
