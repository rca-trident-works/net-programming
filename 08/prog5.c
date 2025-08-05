#include <stdio.h>
#include <string.h>

typedef struct {
  char title[50];
  char author[50];
  int year;
  float price;
} Book;

// 本の情報をユーザーに入力させる

int main() {
  Book book;

  printf("本の名前を入力してください\n");

  printf("タイトル: ");
  fgets(book.title, sizeof(book.title), stdin);
  book.title[strcspn(book.title, "\n")] = 0; // 改行文字を削除

  printf("著者名: ");
  fgets(book.author, sizeof(book.author), stdin);
  book.author[strcspn(book.author, "\n")] = 0; // 改行文字を削除

  printf("出版年: ");
  scanf("%d", &book.year);

  printf("価格: ");
  scanf("%f", &book.price);

  // 入力された本の情報を表示
  printf("=== 本の情報 ===\n");
  printf("タイトル: %s\n", book.title);
  printf("著者名: %s\n", book.author);
  printf("出版年: %d\n", book.year);
  /* printf("価格: %d円\n", book.price); */
  printf("価格: %.2f円\n", book.price);


  return 0;
}
