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
  if (argc < 2) {
    print_usage(argv[0]);
    return 1;
  } else if (argc > 2) {
    print_usage(argv[0]);
    return 1;
  } else if (argv[1] == NULL) {
    print_usage(argv[0]);
    return 1;
  } else if (argv[1][0] == 'a' && argv[1][1] == '\0') {
    func_a();
    return 0;
  } else if (argv[1][0] == 'b' && argv[1][1] == '\0') {
    func_b();
    return 0;
  } else {
    print_usage(argv[0]);
    return 1;
  }
}

void func_a(void) { printf("Called func_a()\n"); }

void func_b(void) { printf("Called func_b()\n"); }
