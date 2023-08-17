#include "../s21_string.h"

void* s21_insert(const char* src, const char* str, size_t start_index) {
  char* result = S21_NULL;
  if (src && str) {
    if (s21_strlen(src) >= start_index) {
      s21_size_t src_len = s21_strlen(src);
      s21_size_t str_len = s21_strlen(str);
      s21_size_t len = src_len + str_len;
      result = (char*)calloc(len, sizeof(char) + 1);
      if (result) {
        s21_strncpy(result, src, start_index);
        *(result + start_index) = '\0';
        s21_strncat(result, str, len + 1);
        s21_strncat(result, src + start_index, len + 1);
      }
    } else if (s21_strlen(src) == 0 & s21_strlen(str) == 0) {
      result = calloc(1, sizeof(char));
    }
  } else if (!str && src) {
    result = calloc(s21_strlen(src) + 1, sizeof(char));
    s21_strncpy(result, src, s21_strlen(src) + 1);
  }
  return result;
}