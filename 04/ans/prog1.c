#include <stdio.h>

#define TRUE           1
#define FALSE          0
#define MAX_TEST_CASES 3

int is_even(int);  // プロトタイプ宣言

/**
 * @brief 偶数かどうかを判定する
 *        偶数の場合は1 , 奇数の場合は0
 * 
 * @param num 
 * @return int 
 */
int is_even(int num) {
    if (num % 2 == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main(int argc, char const *argv[]) {
    int test_numbers[MAX_TEST_CASES] = {7, 8, -2};

    for (int i = 0; i < MAX_TEST_CASES; i++) {
        printf("%d is %s\n", test_numbers[i], is_even(test_numbers[i]) ? "even" : "odd");
    }

    return 0;
}
