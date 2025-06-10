#include <stdio.h>

void func_a(void);
void func_b(void);

// util
void print_usage(const char *prog_name) {
  printf("aもしくはbを与えてください\n");
  printf("使い方: %s <a|b>\n", prog_name);
}

int main(int argc, char const *argv[]) {
  // aなら func_a, bなら func_b を呼び出す
  // Validate
  if (argc != 2 || argv[1][1] != '\0') {
    print_usage(argv[0]);
    return 1;
  }
  // Exec
  switch (argv[1][0]) {
  case 'a':
    func_a();
    return 0;
  case 'b':
    func_b();
    return 0;
  default:
    print_usage(argv[0]);
    return 1;
  }
}

void func_a(void) { printf("Called func_a()\n"); }

void func_b(void) { printf("Called func_b()\n"); }
