#include <stdint.h>
#include <stdio.h>

#include "s21_string.h"

int main() {
  char str1[100];
  char str2[100];
  char format[] = "%.2g";
  float val = 0.2;

  int res1 = s21_sprintf(str1, "%g", val);
  int res2 = sprintf(str2, format, val);
  printf("________\n");
  printf("STR1: %s \n%d\n", str1, res1);
  printf("STR2: %s \n%d\n", str2, res2);

  return 0;
}
