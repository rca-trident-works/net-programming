#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
    int num;
    long long sum = 0;  // オーバーフロー対策としてlong long型を使用

    printf("数字を入力してください（0を入力すると終了します）：\n");

    while (1) {
        printf("数字を入力：");
        if (scanf("%d", &num) != 1) {
            printf("数字を入力してください。\n");
            // 入力バッファをクリア
            while (getchar() != '\n');
            continue;
        }

        if (num == 0) {
            break;
        }

        // オーバーフローチェック
        if (sum > 0 && num > 0 && sum > LLONG_MAX - num) {
            printf("警告：合計が最大値を超える可能性があります。\n");
        }
        if (sum < 0 && num < 0 && sum < LLONG_MIN - num) {
            printf("警告：合計が最小値を超える可能性があります。\n");
        }

        sum += num;
        printf("現在の合計：%lld\n", sum);
    }

    printf("入力された数字の合計は%lldです。\n", sum);

    return 0;
} 