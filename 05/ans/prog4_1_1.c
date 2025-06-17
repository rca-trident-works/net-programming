#include <stdio.h>

void enc_ceasar(char[]);

void enc_ceasar(char str[]) {
    char table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num;
    int  i       = 0;
    int  key     = 5;
    while (str[i]) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            num = str[i] - 'A';
            num = (num + key) % 26;
            str[i] = table[num];
        }
        i++;
    }
}

int main(int argc, char const *argv[]) {
    char str[80];

    printf("文字列を入力してください：");
    scanf("%s", str);

    enc_ceasar(str);
    printf("暗号化完了：%s\n", str);
    
    return 0;
}
