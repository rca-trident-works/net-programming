#include <stdio.h>

int main(int argc, char *argv[]) {
  char chr = -100;
  unsigned char unchr;

  unchr = (unsigned char)chr; // char -> unsigned charにキャスト
  
  printf("unsigned char unchr: %d\n", unchr);

  return 0;
}
