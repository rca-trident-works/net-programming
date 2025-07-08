#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256

void usage(const char *);
void print_list(const char *);

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        usage(argv[0]);
    }

    for (int i = 1; i < argc; i++) {
        print_list(argv[i]);
    }
    return 0;
}
void usage(const char *progname) {
    printf("使用方法：%s ファイル名1 ファイル名2 ...\n", progname);
    exit(1);
}

void print_list(const char *filename) {
    FILE *fp;

    if (strcmp("-", filename) == 0) {
        fp = stdin;
        printf("== filename: stdin ==\n");
    } else if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "[ERROR] ファイル %s を開けませんでした。\n\n", filename);
    } else{
        printf("== filename: %s ==\n", filename);
    }

    int  line_num = 1;
    char line_buf[MAX_LINE];
    while (fgets(line_buf, MAX_LINE, fp) != NULL) {
        printf("%04d: %s", line_num++, line_buf);
    }
    printf("\n");

    fclose(fp);
}