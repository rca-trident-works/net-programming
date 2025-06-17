// 一つの整数を引数として受け取り、
// その数の桁数を求めて返す関数 count_digits を作成する
#include <stdio.h>
#include <limits.h>

#define MAX_TEST_CASES 5
#define ERROR_INVALID_INPUT -1

/**
 * @brief 整数の桁数を計算する
 * 
 * @param num 桁数を計算する整数
 * @return int 桁数。エラーの場合はERROR_INVALID_INPUT
 */
int count_digits(int num) {
    // 最小値の場合は特別処理
    if (num == INT_MIN) {
        return 10; // INT_MINは-2147483648で10桁
    }

    // 整数が0の場合は1桁としてカウント
    if (num == 0) {
        return 1;
    }

    // 負の数の場合は符号を除いてカウント
    if (num < 0) {
        num = -num;
    }

    int count = 0;
    // 数を10で割り続けて桁数をカウント
    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main(int argc, char const *argv[]) {
    int test_numbers[MAX_TEST_CASES] = {
        12345,    // 正の数
        -9876,    // 負の数
        0,        // ゼロ
        INT_MAX,  // 最大値
        INT_MIN   // 最小値
    };
    
    printf("テストケースの実行結果：\n");
    for (int i = 0; i < MAX_TEST_CASES; i++) {
        printf("整数 %d の桁数は %d\n", 
               test_numbers[i], 
               count_digits(test_numbers[i]));
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
        
        printf("整数 %d の桁数は %d\n", input, count_digits(input));
        printf("次の数値を入力してください（-1で終了）：");
    }
    
    return 0;
}
