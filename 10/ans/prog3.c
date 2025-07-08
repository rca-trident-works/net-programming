#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256

void usage(const char *);

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        usage(argv[0]);
    }

    for (int i = 1; i < argc; i++) {
        FILE *fp;

        if (strcmp("-", argv[i]) == 0) {
            fp = stdin;
            printf("== filename: stdin ==\n");
        } else if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "[ERROR] ファイル %s を開けませんでした。\n\n", argv[i]);
        }else{
            printf("== filename: %s ==\n", argv[i]);
        }

        int  line_num = 1;
        char line_buf[MAX_LINE];
        while (fgets(line_buf, MAX_LINE, fp) != NULL) {
            printf("%04d: %s", line_num++, line_buf);
        }
        printf("\n");

        fclose(fp);
    }

    return 0;
}

void usage(const char *progname) {
    printf("使用方法：%s ファイル名1 ファイル名2 ...\n", progname);
    printf("\tファイル名に '-' を使用した場合は標準入力\n");
    exit(1);
}