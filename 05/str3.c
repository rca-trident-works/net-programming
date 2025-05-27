#include <stdio.h>

int main(int argc, char *argv[]) {
  char str1[] = "abcde";
  char str2[][7] = {"abcde", "012", "z1"};

  printf("sizeof str1: %ld\n", sizeof(str1));
  printf("sizeof str2: %ld\n", sizeof(str2));

  return 0;
}
