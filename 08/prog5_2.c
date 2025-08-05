#include <stdio.h>
#include <string.h>
#include <sys/types.h>

#define MAX_BOOKS 20

typedef struct {
  char title[50];
  char author[50];
  int year;
  float price;
} Book;

typedef struct {
  Book books[MAX_BOOKS];
  int count;
} Library;

void addBook(Library *library, const char *title, const char *author, int year,
             float price);
void printLibrary(const Library *library);
int addBookWithPrompt(Library *library, const int index);

void addBook(Library *library, const char *title, const char *author, int year,
             float price) {
  if (library->count < MAX_BOOKS) {
    strncpy(library->books[library->count].title, title,
            sizeof(library->books[library->count].title) - 1);
    library->books[library->count]
        .title[sizeof(library->books[library->count].title) - 1] = '\0';

    strncpy(library->books[library->count].author, author,
            sizeof(library->books[library->count].author) - 1);
    library->books[library->count]
        .author[sizeof(library->books[library->count].author) - 1] = '\0';

    library->books[library->count].year = year;
    library->books[library->count].price = price;

    library->count++;
  } else {
    // TODO: Handle error for exceeding max books
  }
}

void printLibrary(const Library *library) {
  for (int i = 0; i < library->count; i++) {
    printf("=== Book details ===\n");
    printf("タイトル: %s\n", library->books[i].title);
    printf("著者名: %s\n", library->books[i].author);
    printf("出版年: %d\n", library->books[i].year);
    printf("価格: %.2f円\n", library->books[i].price);
    printf("\n");
  }
}

/* プロンプトを表示して本の情報を入力する関数
 * @return 0: 続行, 1: 終了コマンド
 */
int addBookWithPrompt(Library *library, const int index) {
  char title[50];
  char author[50];
  int year;
  float price;
  printf("No:%d 本の情報を入力してください (@QUITで終了):\n", index + 1);
  printf("タイトル: ");
  fgets(title, sizeof(title), stdin);
  if (strncmp(title, "@QUIT", 5) == 0)
    return 1;                      // Handle @QUIT
  title[strcspn(title, "\n")] = 0; // 改行文字を削除
  printf("著者名: ");
  fgets(author, sizeof(author), stdin);
  if (strncmp(author, "@QUIT", 5) == 0)
    return 1;                        // Handle @QUIT
  author[strcspn(author, "\n")] = 0; // 改行文字を削除
  printf("出版年: ");
  scanf("%d", &year);
  printf("価格: ");
  scanf("%f", &price);
  getchar(); // 改行文字を読み飛ばす
  addBook(library, title, author, year, price);

  return 0; // 続行
}

int main() {
  Library library = {.count = 0};
  int index = 0;
  while (1) {
    if (index >= MAX_BOOKS) {
      printf(
          "REACHED MAX_BOOKS limit. Cannot add more books.\n"); // IME kowareta
      break;
    }
    if (addBookWithPrompt(&library, index) == 1) {
      break;
    }
    index += 1;
  }

  // Show the library contents
  printLibrary(&library);

  return 0;
}
