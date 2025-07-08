#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256
#define COL_MAX  100
#define ROW_MAX  100
#define CELL_MAX 100
char data[ROW_MAX][COL_MAX][CELL_MAX];

void usage(const char *);
int  split(char *, int);
void clear_array(void);
void read_csv(const char *);
void output_csv(void);
void rtrim(char *);
int  column_num(const char *);

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        usage(argv[0]);
    }

    for (int i = 1; i < argc; i++) {
        clear_array();
        printf("Filename:%s\n", argv[i]);
        read_csv(argv[i]);
        output_csv();
    }
    return 0;
}

/**
 * @brief Header行のカラム数をカウントする
 * 
 * @param filename 
 * @return int 
 */
int column_num(const char *filename) {
    FILE *fp;
    char  buff[MAX_LINE];

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "[ERROR] ファイル %s を開けませんでした。\n\n", filename);
        exit(2);
    }
    fgets(buff, MAX_LINE, fp);

    int count = 0;
    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == ',') {
            count++;
        }
    }

    fclose(fp);
    return count + 1;
}

void clear_array(void) {
    memset(data, '\0', COL_MAX * ROW_MAX * CELL_MAX);
}

void read_csv(const char *filename) {
    FILE *fp;
    char  line_buf[MAX_LINE];

    // 最大カラム数の確認
    int column_max;
    column_max = column_num(filename);

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "[ERROR] ファイル %s を開けませんでした。\n\n", filename);
        exit(2);
    }

    int col = 0, row = 0;
    while (fgets(line_buf, MAX_LINE, fp) != NULL) {
        int line_column = split(line_buf, row++);
        if (line_column != column_max) {
            fprintf(stderr, "[ERROR] カラム数が不一致です (行：%d)\n\n", row);
            exit(3);
        }
    }

    fclose(fp);
}

/**
 * @brief 行末の改行をnull文字にする
 * 
 * @param str 
 */
void rtrim(char *str) {
    int len = strlen(str);
    while (len > 0 && (str[len-1] == '\n' || str[len-1] == '\r')) {
        str[--len] = '\0';
    }
}

/**
 * @brief 1行のデータをカンマで分割
 * 
 * @param string 
 * @param row 
 * @return int カラム数を返す
 */
int split(char *string, int row) {
    char *ptr;
    int   col = 0;

    // 行末の改行を削除
    rtrim(string);
    // カンマを区切りに文字列を分割
    // 1回目
    ptr = strtok(string, ",");
    // printf("%s\n", ptr);
    // strcpy(data[row][col++], ptr);

    // 2回目以降
    while (ptr != NULL) {
        // strtok関数により変更されたNULLのポインタが先頭
        // printf("%s\n", ptr); // debug用
        strcpy(data[row][col++], ptr);
        ptr = strtok(NULL, ",");
    }
    return col;
}

void output_csv(void) {
    for (int row = 0; data[row][0][0] != '\0'; row++) {
        for (int col = 0; data[row][col][0] != '\0'; col++) {
            printf("(row,col)=(%d,%d) : %s\t", row, col, data[row][col]);
        }
        printf("\n");
    }
    return;
}

void usage(const char *progname) {
    printf("使用方法：%s ファイル名1 ファイル名2 ...\n", progname);
    exit(1);
}