#include "../s21_string.h"
#include "s21_errno.h"

#include <stdio.h>
#include <stdlib.h>

s21_size_t s21_strlen(const char *str) {
  s21_size_t len = 0;
  while (*(str + len) != s21_NULL) len++;
  return len;
}

void *s21_memchr(const void *str, int c, s21_size_t n) {
  char *str_pointer = (char *)str;
  s21_size_t idx = 0;
  while (idx < n && *(str_pointer + idx) != c) idx++;
  return idx < n ? str_pointer + idx : s21_NULL;
}

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int return_value = 0;
  char *str1_pointer = (char *)str1, *str2_pointer = (char *)str2;
  s21_size_t idx = 0;
  while (idx < n && *(str1_pointer + idx) == *(str2_pointer + idx)) idx++;
  if (idx < n)
    return_value = *(str1_pointer + idx) < *(str2_pointer + idx) ? -1 : 1;
  return return_value;
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  for (s21_size_t i = 0; i < n; i++) *(char *)(dest + i) = *(char *)(src + i);
  return dest;
}

void *s21_memset(void *str, int c, s21_size_t n) {
  for (s21_size_t i = 0; i < n; i++) *(char *)(str + i) = c;
  return str;
}

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  s21_size_t i = 0, j = 0;
  while (dest[i] != '\0') i++;
  while (j < n) {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j + 1] = '\0';
  return dest;
}

char *s21_strchr(const char *str, int c) {
  if (c == '\0') return (char *)(str + s21_strlen(str));
  char *return_value = (char *)str;
  while (*return_value != c && return_value != (char *)(str + s21_strlen(str)))
    return_value++;
  if (return_value == (char *)(str + s21_strlen(str))) return_value = s21_NULL;
  return return_value;
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  int overflow = n > s21_strlen(src);
  s21_size_t limit = n > s21_strlen(src) ? s21_strlen(src) : n;
  for (s21_size_t idx = 0; idx < limit; idx++) *(dest + idx) = *(src + idx);
  if (overflow) *(dest + limit) = '\0';
  return dest;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t i;
  s21_size_t len1 = s21_strlen(str1);
  s21_size_t len2 = s21_strlen(str2);
  for (i = 0; i < len1; i++) {
    for (s21_size_t j = 0; j < len2; j++) {
      if (str2[j] == str1[i]) {
        return i;
      }
    }
  }
  return i;
}
char *s21_strerror(int errnum) {
  static char unknown_error[1500];
  s21_sprintf(unknown_error, "Unknown error: %d", errnum);
  return (errnum >= 0 && errnum <= MAX_ERROR) ? (char *)errors[errnum] : unknown_error;
}
char *s21_strtok(char *str, const char *delim) {
  static char *result = s21_NULL;
  if (str) {
    result = str;
    while (*result && s21_strchr(delim, *result)) *result++ = '\0';
  }
  if (*result != '\0') {
    str = result;
    while (*result && !s21_strchr(delim, *result)) ++result;
    while (*result && s21_strchr(delim, *result)) *result++ = '\0';
  } else {
    str = s21_NULL;
  }
  return str;
}

char *s21_strpbrk(const char *str1, const char *str2) {
  char *return_value = s21_NULL;
  int hashmap[255] = {};
  for (s21_size_t i = 0; i < s21_strlen(str2); i++) hashmap[(int)str2[i]] = 1;
  s21_size_t idx = 0;
  while (idx < s21_strlen(str1) && !hashmap[(int)str1[idx]]) idx++;
  if (idx < s21_strlen(str1)) return_value = (char *)(str1 + idx);
  return return_value;
}

char *s21_strrchr(const char *str, int c) {
  char *res = s21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(str) + 1; i++) {
    if (str[i] == c) {
      res = ((char *)str) + i;
    }
  }
  return res;
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (str1[i] != str2[i]) {
      result = str1[i] - str2[i];
      break;
    }
  }
  return result;
}

char *s21_strstr(const char *haystack, const char *needle) {
  s21_size_t needle_size = s21_strlen(needle);
  if (s21_strlen(haystack) < needle_size) return s21_NULL;
  s21_size_t last_index = s21_strlen(haystack) - needle_size;
  for (s21_size_t i = 0; i <= last_index; i++)
    if (s21_strncmp(haystack + i, needle, needle_size) == 0)
      return (char *)(haystack + i);
  return s21_NULL;
}

void *s21_to_upper(const char *str) {
  s21_size_t len_to_upper = s21_strlen(str);
  void *ch = s21_NULL;
  if (len_to_upper > 0) {
    char *buff = (char *)calloc(sizeof(char), (len_to_upper + 1));
    if (buff) {
      for (s21_size_t i = 0; i <= len_to_upper; i++)
        if (str[i] >= 'a' && str[i] <= 'z') {
          (buff[i] = str[i] - 32);
        } else
          (buff[i] = str[i]);
      ch = (void *)buff;
    }
  }
  return ch;
}

void *s21_to_lower(const char *str) {
  s21_size_t len_to_lower = s21_strlen(str);
  void *ch = s21_NULL;
  if (len_to_lower > 0) {
    char *buff = (char *)calloc(sizeof(char), (len_to_lower + 1));
    if (buff) {
      for (s21_size_t i = 0; i <= len_to_lower; i++)
        if (str[i] >= 'A' && str[i] <= 'Z') {
          (buff[i] = str[i] + 32);
        } else
          (buff[i] = str[i]);
      ch = (void *)buff;
    }
  }
  return ch;
}

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  if (!src || !str) return s21_NULL;

  s21_size_t n1 = s21_strlen(src);
  s21_size_t n2 = s21_strlen(str);
  if (start_index > n1) return s21_NULL;

  char *non_const_src = (char *)src;
  for (s21_size_t i = start_index; i < start_index + n2; i++) {
    non_const_src[i + n2] = src[i];
    non_const_src[i] = str[i - start_index];
  }
  return (void *)src;
}

void *s21_trim(const char *src, const char *trim_chars) {
  if (!src) return s21_NULL;

  int hmap[500] = {};
  if (trim_chars != s21_NULL) {
    for (s21_size_t i = 0; i < s21_strlen(trim_chars); i++) {
      int val = trim_chars[i];
      hmap[val] = 1;
    }
  }
  int left_idx = 0, right_idx = s21_strlen(src) - 1;
  while (left_idx < (int)s21_strlen(src) && hmap[(int)src[left_idx]] == 1)
    left_idx++;
  while (hmap[(int)src[right_idx]] == 1) right_idx--;
  if (left_idx > right_idx) return s21_NULL;

  char *return_string = malloc((right_idx - left_idx + 2) * sizeof(char));

  for (int i = left_idx; i <= right_idx; i++) {
    return_string[i - left_idx] = src[i];
  }
  return_string[right_idx - left_idx + 1] = 0;
  return return_string;
}
