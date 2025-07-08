#include <csv.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct counts {
    long unsigned fields;
    long unsigned rows;
};

void callback1(void *s, size_t len, void *data) {
    ((struct counts *)data)->fields++;
    printf("(%s)", (char *)s);  // 吉村が追加
}

void callback2(int c, void *data) {
    ((struct counts *)data)->rows++;
    printf("\t1行終了\n");      // 吉村が追加
}

int main(int argc, char *argv[]) {
    FILE *fp;
    struct csv_parser p;
    char buf[1024];
    size_t bytes_read;
    struct counts c = {0, 0};

    if (csv_init(&p, CSV_APPEND_NULL) != 0)
        exit(EXIT_FAILURE);
    fp = fopen(argv[1], "rb");
    if (!fp)
        exit(EXIT_FAILURE);

    while ((bytes_read = fread(buf, 1, 1024, fp)) > 0)
        if (csv_parse(&p, buf, bytes_read, callback1, callback2, &c) != bytes_read) {
            fprintf(stderr, "Error while parsing file: %s\n",
                    csv_strerror(csv_error(&p)));
            exit(EXIT_FAILURE);
        }
    fclose(fp);
    csv_fini(&p, callback1, callback2, &c);
    printf("%lu fields, %lu rows\n", c.fields, c.rows);
    csv_free(&p);
    exit(EXIT_SUCCESS);
}