#include "../s21_string.h"
char *s21_strrchr(const char *str, int c) {
  int count = 0;
  char *tmp = S21_NULL;

  while (*(str + count) != '\0') {
    if (*(str + count) == c) tmp = (char *)(str + count);

    count++;
  }

  return tmp;
}
