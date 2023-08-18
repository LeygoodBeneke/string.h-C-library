#include "../s21_string.h"

void *s21_trim(const char *src, const char *trim_chars) {
  char *result = S21_NULL;
  if (!trim_chars && src && s21_strlen(src) == 0) return result;
  if (src) {
    if (trim_chars && *trim_chars) {
      s21_size_t len = s21_strlen(src);
      while (*src && s21_strchr(trim_chars, *src)) {
        src++;
        len--;
      }
      if (len) {
        s21_size_t j = 0, k = len - 1;
        while (j < s21_strlen(trim_chars)) {
          if (src[k] == trim_chars[j]) {
            k--;
            len--;
            j = 0;
            continue;
          }
          j++;
        }
      }
      result = (char *)malloc(sizeof(char) * (len + 1));
      if (result) {
        for (s21_size_t i = 0; i < len + 1; i++) {
          if (i < len) {
            result[i] = src[i];
          } else {
            result[i] = '\0';
          }
        }
      }
    } else {
      result = s21_trim(src, " \t\n");
    }
  }
  return result;
}
