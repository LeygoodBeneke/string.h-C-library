#include <check.h>
#include <stdint.h>
#include <string.h>

#include "s21_test.h"

#define STR_LEN 512

START_TEST(sprintf_spec_c_1) {
  char format[] = "%c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_2) {
  char format[] = "str: %c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_3) {
  char format[] = "%cstr1";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_4) {
  char format[] = "%c%c";
  char str1[100];
  char str2[100];
  char ch1 = 'H';
  char ch2 = 'e';

  int res1 = s21_sprintf(str1, format, ch1, ch2);
  int res2 = sprintf(str2, format, ch1, ch2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_5) {
  char format[] = "%c %c";
  char str1[100];
  char str2[100];
  char ch1 = 'H';
  char ch2 = 'e';

  int res1 = s21_sprintf(str1, format, ch1, ch2);
  int res2 = sprintf(str2, format, ch1, ch2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_6) {
  char format[] = "%cstr\n%c";
  char str1[100];
  char str2[100];
  char ch1 = 'H';
  char ch2 = 'e';

  int res1 = s21_sprintf(str1, format, ch1, ch2);
  int res2 = sprintf(str2, format, ch1, ch2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_7) {
  char format[] = "%c\t%c";
  char str1[100];
  char str2[100];
  char ch1 = 'H';
  char ch2 = 'e';

  int res1 = s21_sprintf(str1, format, ch1, ch2);
  int res2 = sprintf(str2, format, ch1, ch2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_1) {
  char format[] = "%-c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_2) {
  char format[] = "%+c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_3) {
  char format[] = "% c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_4) {
  char format[] = "%#c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_5) {
  char format[] = "%0c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_6) {
  char format[] = "%-+c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_7) {
  char format[] = "%-+ c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_8) {
  char format[] = "%-+ #c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_9) {
  char format[] = "%-+ #0c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_10) {
  char format[] = "%+#-0 c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_11) {
  char format[] = "%10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_12) {
  char format[] = "%-10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_13) {
  char format[] = "%+10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_14) {
  char format[] = "% 10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_15) {
  char format[] = "%#10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_16) {
  char format[] = "%010c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_17) {
  char format[] = "%-+10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_18) {
  char format[] = "%-+ 10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_19) {
  char format[] = "%-+ #10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_20) {
  char format[] = "%-+ #010c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_21) {
  char format[] = "%+#-0 10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_22) {
  char format[] = "%+#-0 *c";
  char str1[100];
  char str2[100];
  char ch = 'H';
  int d = 10;

  int res1 = s21_sprintf(str1, format, d, ch);
  int res2 = sprintf(str2, format, d, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_23) {
  char format[] = "%.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_24) {
  char format[] = "%-.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_25) {
  char format[] = "%+.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_26) {
  char format[] = "% .10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_27) {
  char format[] = "%#.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_28) {
  char format[] = "%0.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_29) {
  char format[] = "%-+.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_30) {
  char format[] = "%-+ .10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_31) {
  char format[] = "%-+ #.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_32) {
  char format[] = "%-+ #0.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_33) {
  char format[] = "%+#-0 .10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_34) {
  char format[] = "%+#-0 .*c";
  char str1[100];
  char str2[100];
  char ch = 'H';
  int d = 10;

  int res1 = s21_sprintf(str1, format, d, ch);
  int res2 = sprintf(str2, format, d, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_35) {
  char format[] = "%+#-0 10.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_36) {
  char format[] = "%+#-0 10.3c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_flags_37) {
  char format[] = "%+#-0 3.10c";
  char str1[100];
  char str2[100];
  char ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_c_long_1) {
  char format[] = "%lc";
  char str1[100];
  char str2[100];
  wchar_t ch = 'H';

  int res1 = s21_sprintf(str1, format, ch);
  int res2 = sprintf(str2, format, ch);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_1) {
  char format[] = "%d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_2) {
  char format[] = "str: %d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_3) {
  char format[] = "%dstr1";
  char str1[100];
  char str2[100];
  int d = +228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_4) {
  char format[] = "%d%d";
  char str1[100];
  char str2[100];
  int d1 = -228;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_5) {
  char format[] = "%d %d";
  char str1[100];
  char str2[100];
  int d1 = 0x228;
  int d2 = 13;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_6) {
  char format[] = "%dstr\n%d";
  char str1[100];
  char str2[100];
  int d1 = 0xff;
  int d2 = 1;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_7) {
  char format[] = "%d\t%d";
  char str1[100];
  char str2[100];
  int d1 = 228;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_1) {
  char format[] = "%-d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_2) {
  char format[] = "%+d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_3) {
  char format[] = "% d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_4) {
  char format[] = "%#d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_5) {
  char format[] = "%0d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_6) {
  char format[] = "%-+d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_7) {
  char format[] = "%-+ d";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_8) {
  char format[] = "%-+ #d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_9) {
  char format[] = "%-+ #0d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_10) {
  char format[] = "%+#-0 d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_11) {
  char format[] = "%10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_12) {
  char format[] = "%-10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_13) {
  char format[] = "%+10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_14) {
  char format[] = "% 10d";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_15) {
  char format[] = "%#10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_16) {
  char format[] = "%010d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_17) {
  char format[] = "%+010d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_18) {
  char format[] = "%-+ 10d";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_19) {
  char format[] = "%-+ #10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_20) {
  char format[] = "%-+ #010d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_21) {
  char format[] = "%+#-0 10d";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_22) {
  char format[] = "%+#-0 *d";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_23) {
  char format[] = "%.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_24) {
  char format[] = "%.0d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_25) {
  char format[] = "%.2d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_26) {
  char format[] = "%.3d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_27) {
  char format[] = "%-.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_28) {
  char format[] = "%+.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_29) {
  char format[] = "% .10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_30) {
  char format[] = "%#.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_31) {
  char format[] = "%0.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_32) {
  char format[] = "%-+.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_33) {
  char format[] = "%-+ .10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_34) {
  char format[] = "%-+ #.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_35) {
  char format[] = "%-+ #0.10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_36) {
  char format[] = "%+#-0 .10d";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_37) {
  char format[] = "%+#-0 .*d";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_38) {
  char format[] = "%+#-0 10.10d";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_39) {
  char format[] = "%+#-0 10.3d";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_flags_40) {
  char format[] = "%+#-0 3.10d";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_long_1) {
  char format[] = "%hd";
  char str1[100];
  char str2[100];
  short int d = INT8_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_long_2) {
  char format[] = "%ld";
  char str1[100];
  char str2[100];
  long int d = INT32_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_d_long_3) {
  char format[] = "%lld";
  char str1[100];
  char str2[100];
  long long int d = INT64_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_1) {
  char format[] = "%i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_2) {
  char format[] = "str: %i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_3) {
  char format[] = "%istr1";
  char str1[100];
  char str2[100];
  int d = +228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_4) {
  char format[] = "%i%i";
  char str1[100];
  char str2[100];
  int d1 = -228;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_5) {
  char format[] = "%i %i";
  char str1[100];
  char str2[100];
  int d1 = 0x228;
  int d2 = 13;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_6) {
  char format[] = "%istr\n%i";
  char str1[100];
  char str2[100];
  int d1 = 0xff;
  int d2 = 1;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_7) {
  char format[] = "%i\t%i";
  char str1[100];
  char str2[100];
  int d1 = 228;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_1) {
  char format[] = "%-i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_2) {
  char format[] = "%+i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_3) {
  char format[] = "% i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_4) {
  char format[] = "%#i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_5) {
  char format[] = "%0i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_6) {
  char format[] = "%-+i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_7) {
  char format[] = "%-+ i";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_8) {
  char format[] = "%-+ #i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_9) {
  char format[] = "%-+ #0i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_10) {
  char format[] = "%+#-0 i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_11) {
  char format[] = "%10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_12) {
  char format[] = "%-10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_13) {
  char format[] = "%+10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_14) {
  char format[] = "% 10i";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_15) {
  char format[] = "%#10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_16) {
  char format[] = "%010i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_17) {
  char format[] = "%-+10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_18) {
  char format[] = "%-+ 10i";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_19) {
  char format[] = "%-+ #10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_20) {
  char format[] = "%-+ #010i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_21) {
  char format[] = "%+#-0 10i";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_22) {
  char format[] = "%+#-0 *i";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_23) {
  char format[] = "%.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_24) {
  char format[] = "%.0i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_25) {
  char format[] = "%.2i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_26) {
  char format[] = "%.3i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_27) {
  char format[] = "%-.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_28) {
  char format[] = "%+.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_29) {
  char format[] = "% .10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_30) {
  char format[] = "%#.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_31) {
  char format[] = "%0.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_32) {
  char format[] = "%-+.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_33) {
  char format[] = "%-+ .10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_34) {
  char format[] = "%-+ #.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_35) {
  char format[] = "%-+ #0.10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_36) {
  char format[] = "%+#-0 .10i";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_37) {
  char format[] = "%+#-0 .*i";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_38) {
  char format[] = "%+#-0 10.10i";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_39) {
  char format[] = "%+#-0 10.3i";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_flags_40) {
  char format[] = "%+#-0 3.10i";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_long_1) {
  char format[] = "%hi";
  char str1[100];
  char str2[100];
  short int d = INT8_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_long_2) {
  char format[] = "%li";
  char str1[100];
  char str2[100];
  long int d = INT32_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_i_long_3) {
  char format[] = "%lli";
  char str1[100];
  char str2[100];
  long long int d = INT64_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_1) {
  char format[] = "%e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_2) {
  char format[] = "str: %e";
  char str1[100];
  char str2[100];
  float num = -123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_3) {
  char format[] = "%estr1";
  char str1[100];
  char str2[100];
  float num = +123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_4) {
  char format[] = "%e%e";
  char str1[100];
  char str2[100];
  float num1 = 123.02;
  float num2 = 1.33;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_5) {
  char format[] = "%e %e";
  char str1[100];
  char str2[100];
  float num1 = 0.873;
  float num2 = 1234.2;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_6) {
  char format[] = "%estr\n%e";
  char str1[100];
  char str2[100];
  float num1 = 0;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_7) {
  char format[] = "%e\t%e";
  char str1[100];
  char str2[100];
  float num1 = -2;
  float num2 = 57.58;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_1) {
  char format[] = "%-e";
  char str1[100];
  char str2[100];
  float num = -123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_2) {
  char format[] = "%+e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_3) {
  char format[] = "% e";
  char str1[100];
  char str2[100];
  float num = -13.1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_4) {
  char format[] = "%#e";
  char str1[100];
  char str2[100];
  float num = 12.0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_5) {
  char format[] = "%0e";
  char str1[100];
  char str2[100];
  float num = 1233.003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_6) {
  char format[] = "%-+e";
  char str1[100];
  char str2[100];
  float num = 0.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_7) {
  char format[] = "%-+ e";
  char str1[100];
  char str2[100];
  float num = 33.33;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_8) {
  char format[] = "%-+ #e";
  char str1[100];
  char str2[100];
  float num = 103.1157;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_9) {
  char format[] = "%-+ #0e";
  char str1[100];
  char str2[100];
  float num = 23.127;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_10) {
  char format[] = "%+#-0 e";
  char str1[100];
  char str2[100];
  float num = -123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_12) {
  char format[] = "%-10e";
  char str1[100];
  char str2[100];
  float num = 0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_13) {
  char format[] = "%+10e";
  char str1[100];
  char str2[100];
  float num = -1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_14) {
  char format[] = "% 10e";
  char str1[100];
  char str2[100];
  float num = 0.003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_15) {
  char format[] = "%#10e";
  char str1[100];
  char str2[100];
  float num = 0.999999;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_16) {
  char format[] = "%010e";
  char str1[100];
  char str2[100];
  float num = 9.99999;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_17) {
  char format[] = "%-+10e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_18) {
  char format[] = "%-+ 10e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_19) {
  char format[] = "%-+ #10e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_20) {
  char format[] = "%-+ #010e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_21) {
  char format[] = "%+#-0 10e";
  char str1[100];
  char str2[100];
  float num = 0.10203;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_22) {
  char format[] = "%+#-0 *e";
  char str1[100];
  char str2[100];
  int num1 = 10;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_23) {
  char format[] = "%.6e";
  char str1[100];
  char str2[100];
  float num = 1243.3;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_24) {
  char format[] = "%.0e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_25) {
  char format[] = "%.2e";
  char str1[100];
  char str2[100];
  float num = -20.00123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_26) {
  char format[] = "%.3e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_27) {
  char format[] = "%-.6e";
  char str1[100];
  char str2[100];
  float num = 0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_28) {
  char format[] = "%+.6e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_29) {
  char format[] = "% .6e";
  char str1[100];
  char str2[100];
  float num = 1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_30) {
  char format[] = "%#.6e";
  char str1[100];
  char str2[100];
  float num = 103.100001;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_31) {
  char format[] = "%0.6e";
  char str1[100];
  char str2[100];
  float num = 0.999999;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_32) {
  char format[] = "%-+.6e";
  char str1[100];
  char str2[100];
  float num = 100;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_33) {
  char format[] = "%-+ .6e";
  char str1[100];
  char str2[100];
  float num = 10033.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_34) {
  char format[] = "%-+ #.6e";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_35) {
  char format[] = "%-+ #0.6e";
  char str1[100];
  char str2[100];
  float num = -1.00003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_36) {
  char format[] = "%+#-0 .6e";
  char str1[100];
  char str2[100];
  float num = 0.13;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_37) {
  char format[] = "%+#-0 .*e";
  char str1[100];
  char str2[100];
  int num1 = 10;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_38) {
  char format[] = "%+#-0 10.6e";
  char str1[100];
  char str2[100];
  float num = 3.12301;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_39) {
  char format[] = "%+#-0 10.3e";
  char str1[100];
  char str2[100];
  float num = 23.12003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_flags_40) {
  char format[] = "%+#-0 3.6e";
  char str1[100];
  char str2[100];
  float num = 103.023;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_e_long_2) {
  char format[] = "%Le";
  char str1[100];
  char str2[100];
  long double num = 1e-309;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_1) {
  char format[] = "%E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_2) {
  char format[] = "str: %E";
  char str1[100];
  char str2[100];
  float num = -123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_3) {
  char format[] = "%Estr1";
  char str1[100];
  char str2[100];
  float num = +123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_4) {
  char format[] = "%E%E";
  char str1[100];
  char str2[100];
  float num1 = 123.02;
  float num2 = 1.33;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_5) {
  char format[] = "%E %E";
  char str1[100];
  char str2[100];
  float num1 = 0.873;
  float num2 = 1234.2;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_6) {
  char format[] = "%Estr\n%E";
  char str1[100];
  char str2[100];
  float num1 = 0;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_7) {
  char format[] = "%E\t%E";
  char str1[100];
  char str2[100];
  float num1 = -2;
  float num2 = 57.58;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_1) {
  char format[] = "%-E";
  char str1[100];
  char str2[100];
  float num = -123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_2) {
  char format[] = "%+E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_3) {
  char format[] = "% E";
  char str1[100];
  char str2[100];
  float num = -13.1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_4) {
  char format[] = "%#E";
  char str1[100];
  char str2[100];
  float num = 12.0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_5) {
  char format[] = "%0E";
  char str1[100];
  char str2[100];
  float num = 1233.003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_6) {
  char format[] = "%-+E";
  char str1[100];
  char str2[100];
  float num = 0.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_7) {
  char format[] = "%-+ E";
  char str1[100];
  char str2[100];
  float num = 33.33;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_8) {
  char format[] = "%-+ #E";
  char str1[100];
  char str2[100];
  float num = 103.1157;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_9) {
  char format[] = "%-+ #0E";
  char str1[100];
  char str2[100];
  float num = 23.127;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_10) {
  char format[] = "%+#-0 E";
  char str1[100];
  char str2[100];
  float num = -123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_12) {
  char format[] = "%-10E";
  char str1[100];
  char str2[100];
  float num = 0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_13) {
  char format[] = "%+10E";
  char str1[100];
  char str2[100];
  float num = -1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_14) {
  char format[] = "% 10E";
  char str1[100];
  char str2[100];
  float num = 0.003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_15) {
  char format[] = "%#10E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_16) {
  char format[] = "%010E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_17) {
  char format[] = "%-+10E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_18) {
  char format[] = "%-+ 10E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_19) {
  char format[] = "%-+ #10E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_20) {
  char format[] = "%-+ #010E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_21) {
  char format[] = "%+#-0 10E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_22) {
  char format[] = "%+#-0 *E";
  char str1[100];
  char str2[100];
  int num1 = 10;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_23) {
  char format[] = "%.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_24) {
  char format[] = "%.0E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_25) {
  char format[] = "%.2E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_26) {
  char format[] = "%.3E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_27) {
  char format[] = "%-.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_28) {
  char format[] = "%+.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_29) {
  char format[] = "% .6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_30) {
  char format[] = "%#.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_31) {
  char format[] = "%0.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_32) {
  char format[] = "%-+.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_33) {
  char format[] = "%-+ .6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_34) {
  char format[] = "%-+ #.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_35) {
  char format[] = "%-+ #0.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_36) {
  char format[] = "%+#-0 .6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_37) {
  char format[] = "%+#-0 .*E";
  char str1[100];
  char str2[100];
  int num1 = 10;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_38) {
  char format[] = "%+#-0 10.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_39) {
  char format[] = "%+#-0 10.3E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_flags_40) {
  char format[] = "%+#-0 3.6E";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_E_long_2) {
  char format[] = "%LE";
  char str1[100];
  char str2[100];
  long double num = 1e-309;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_1) {
  char format[] = "%f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_2) {
  char format[] = "str: %f";
  char str1[100];
  char str2[100];
  float num = -123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_3) {
  char format[] = "%fstr1";
  char str1[100];
  char str2[100];
  float num = +123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_4) {
  char format[] = "%f%f";
  char str1[100];
  char str2[100];
  float num1 = 123.02;
  float num2 = 1.33;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_5) {
  char format[] = "%f %f";
  char str1[100];
  char str2[100];
  float num1 = 0.873;
  float num2 = 1234.2;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_6) {
  char format[] = "%fstr\n%f";
  char str1[100];
  char str2[100];
  float num1 = 0;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_7) {
  char format[] = "%f\t%f";
  char str1[100];
  char str2[100];
  float num1 = -2;
  float num2 = 57.58;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_1) {
  char format[] = "%-f";
  char str1[100];
  char str2[100];
  float num = -123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_2) {
  char format[] = "%+f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_3) {
  char format[] = "% f";
  char str1[100];
  char str2[100];
  float num = -13.1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_4) {
  char format[] = "%#f";
  char str1[100];
  char str2[100];
  float num = 12.0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_5) {
  char format[] = "%0f";
  char str1[100];
  char str2[100];
  float num = 1233.003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_6) {
  char format[] = "%-+f";
  char str1[100];
  char str2[100];
  float num = 0.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_7) {
  char format[] = "%-+ f";
  char str1[100];
  char str2[100];
  float num = 33.33;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_8) {
  char format[] = "%-+ #f";
  char str1[100];
  char str2[100];
  float num = 103.1157;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_9) {
  char format[] = "%-+ #0f";
  char str1[100];
  char str2[100];
  float num = 23.127;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_10) {
  char format[] = "%+#-0 f";
  char str1[100];
  char str2[100];
  float num = -123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_11) {
  char format[] = "%10f";
  char str1[100];
  char str2[100];
  float num = 123123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_12) {
  char format[] = "%-10f";
  char str1[100];
  char str2[100];
  float num = 0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_13) {
  char format[] = "%+10f";
  char str1[100];
  char str2[100];
  float num = -1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_14) {
  char format[] = "% 10f";
  char str1[100];
  char str2[100];
  float num = 0.003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_15) {
  char format[] = "%#10f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_16) {
  char format[] = "%010f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_17) {
  char format[] = "%-+10f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_19) {
  char format[] = "%-+ #10f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_20) {
  char format[] = "%-+ #010f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_21) {
  char format[] = "%+#-0 10f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_22) {
  char format[] = "%+#-0 *f";
  char str1[100];
  char str2[100];
  int num1 = 10;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_23) {
  char format[] = "%.6f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_24) {
  char format[] = "%.0f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_25) {
  char format[] = "%.2f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_26) {
  char format[] = "%.3f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_27) {
  char format[] = "%-.6f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_28) {
  char format[] = "%+.6f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_29) {
  char format[] = "% .6f";
  char str1[100];
  char str2[100];
  float num = 1;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_30) {
  char format[] = "%#.6f";
  char str1[100];
  char str2[100];
  float num = 103.100001;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_31) {
  char format[] = "%0.6f";
  char str1[100];
  char str2[100];
  float num = 0.999999;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_32) {
  char format[] = "%-+.6f";
  char str1[100];
  char str2[100];
  float num = 100;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_33) {
  char format[] = "%-+ .6f";
  char str1[100];
  char str2[100];
  float num = 10033.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_34) {
  char format[] = "%-+ #.6f";
  char str1[100];
  char str2[100];
  float num = 123.123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_35) {
  char format[] = "%-+ #0.6f";
  char str1[100];
  char str2[100];
  float num = -1.00003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_36) {
  char format[] = "%+#-0 .6f";
  char str1[100];
  char str2[100];
  float num = 0.13;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_37) {
  char format[] = "%+#-0 .*f";
  char str1[100];
  char str2[100];
  int num1 = 10;
  float num2 = 3;

  int res1 = s21_sprintf(str1, format, num1, num2);
  int res2 = sprintf(str2, format, num1, num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_38) {
  char format[] = "%+#-0 10.6f";
  char str1[100];
  char str2[100];
  float num = 3.12301;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_39) {
  char format[] = "%+#-0 10.3f";
  char str1[100];
  char str2[100];
  float num = 23.12003;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_flags_40) {
  char format[] = "%+#-0 3.6f";
  char str1[100];
  char str2[100];
  float num = 103.023;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_long_1) {
  char format[] = "%lf";
  char str1[100];
  char str2[100];
  double num = 13000000000000000;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_f_long_2) {
  char format[] = "%Lf";
  char str1[100];
  char str2[100];
  long double num = 1e-309;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(sprintf_spec_g_1) {
//   char format[] = "%g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_2) {
//   char format[] = "str: %g";
//   char str1[100];
//   char str2[100];
//   float num = -123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_3) {
//   char format[] = "%gstr1";
//   char str1[100];
//   char str2[100];
//   float num = +123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_4) {
//   char format[] = "%g%g";
//   char str1[100];
//   char str2[100];
//   float num1 = 123.02;
//   float num2 = 1.33;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_5) {
//   char format[] = "%g %g";
//   char str1[100];
//   char str2[100];
//   float num1 = 0.873;
//   float num2 = 1234.2;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_6) {
//   char format[] = "%gstr\n%g";
//   char str1[100];
//   char str2[100];
//   float num1 = 0;
//   float num2 = 3;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_7) {
//   char format[] = "%g\t%g";
//   char str1[100];
//   char str2[100];
//   float num1 = -2;
//   float num2 = 57.58;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_1) {
//   char format[] = "%-g";
//   char str1[100];
//   char str2[100];
//   float num = -123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_2) {
//   char format[] = "%+g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_3) {
//   char format[] = "% g";
//   char str1[100];
//   char str2[100];
//   float num = -13.1;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_4) {
//   char format[] = "%#g";
//   char str1[100];
//   char str2[100];
//   float num = 12.0;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_5) {
//   char format[] = "%0g";
//   char str1[100];
//   char str2[100];
//   float num = 1233.003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_6) {
//   char format[] = "%-+g";
//   char str1[100];
//   char str2[100];
//   float num = 0.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_7) {
//   char format[] = "%-+ g";
//   char str1[100];
//   char str2[100];
//   float num = 33.33;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_8) {
//   char format[] = "%-+ #g";
//   char str1[100];
//   char str2[100];
//   float num = 103.1157;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_9) {
//   char format[] = "%-+ #0g";
//   char str1[100];
//   char str2[100];
//   float num = 23.127;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_10) {
//   char format[] = "%+#-0 g";
//   char str1[100];
//   char str2[100];
//   float num = -123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_11) {
//   char format[] = "%10g";
//   char str1[100];
//   char str2[100];
//   float num = 123123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_12) {
//   char format[] = "%-10g";
//   char str1[100];
//   char str2[100];
//   float num = 0;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_13) {
//   char format[] = "%+10g";
//   char str1[100];
//   char str2[100];
//   float num = -1;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_14) {
//   char format[] = "% 10g";
//   char str1[100];
//   char str2[100];
//   float num = 0.003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_15) {
//   char format[] = "%#10g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_16) {
//   char format[] = "%010g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_17) {
//   char format[] = "%-+10g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_18) {
//   char format[] = "%-+ 10g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_19) {
//   char format[] = "%-+ #10g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_20) {
//   char format[] = "%-+ #010g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_21) {
//   char format[] = "%+#-0 10g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_22) {
//   char format[] = "%+#-0 *g";
//   char str1[100];
//   char str2[100];
//   int num1 = 10;
//   float num2 = 3;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_23) {
//   char format[] = "%.6g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_24) {
//   char format[] = "%.0g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_25) {
//   char format[] = "%.2g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_26) {
//   char format[] = "%.3g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_27) {
//   char format[] = "%-.6g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_28) {
//   char format[] = "%+.6g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_29) {
//   char format[] = "% .6g";
//   char str1[100];
//   char str2[100];
//   float num = 1;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_30) {
//   char format[] = "%#.6g";
//   char str1[100];
//   char str2[100];
//   float num = 103.100001;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_31) {
//   char format[] = "%0.6g";
//   char str1[100];
//   char str2[100];
//   float num = 0.999999;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_32) {
//   char format[] = "%-+.6g";
//   char str1[100];
//   char str2[100];
//   float num = 100;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_33) {
//   char format[] = "%-+ .6g";
//   char str1[100];
//   char str2[100];
//   float num = 10033.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_34) {
//   char format[] = "%-+ #.6g";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_35) {
//   char format[] = "%-+ #0.6g";
//   char str1[100];
//   char str2[100];
//   float num = -1.00003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_36) {
//   char format[] = "%+#-0 .6g";
//   char str1[100];
//   char str2[100];
//   float num = 0.13;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_37) {
//   char format[] = "%+#-0 .*g";
//   char str1[100];
//   char str2[100];
//   int num1 = 10;
//   float num2 = 3;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_38) {
//   char format[] = "%+#-0 10.6g";
//   char str1[100];
//   char str2[100];
//   float num = 1e100;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_39) {
//   char format[] = "%+#-0 10.3g";
//   char str1[100];
//   char str2[100];
//   float num = 23.12003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_flags_40) {
//   char format[] = "%+#-0 3.6g";
//   char str1[100];
//   char str2[100];
//   float num = 103.023;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_long_1) {
//   char format[] = "%lg";
//   char str1[100];
//   char str2[100];
//   double num = 13000000000000000;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_g_long_2) {
//   char format[] = "%Lg";
//   char str1[100];
//   char str2[100];
//   long double num = 1e-309;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_1) {
//   char format[] = "%G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_2) {
//   char format[] = "str: %G";
//   char str1[100];
//   char str2[100];
//   float num = -123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_3) {
//   char format[] = "%Gstr1";
//   char str1[100];
//   char str2[100];
//   float num = +123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_4) {
//   char format[] = "%G%G";
//   char str1[100];
//   char str2[100];
//   float num1 = 123.02;
//   float num2 = 1.33;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_5) {
//   char format[] = "%G %G";
//   char str1[100];
//   char str2[100];
//   float num1 = 0.873;
//   float num2 = 1234.2;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_6) {
//   char format[] = "%Gstr\n%G";
//   char str1[100];
//   char str2[100];
//   float num1 = 0;
//   float num2 = 3;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_7) {
//   char format[] = "%G\t%G";
//   char str1[100];
//   char str2[100];
//   float num1 = -2;
//   float num2 = 57.58;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_1) {
//   char format[] = "%-G";
//   char str1[100];
//   char str2[100];
//   float num = -123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_2) {
//   char format[] = "%+G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_3) {
//   char format[] = "% G";
//   char str1[100];
//   char str2[100];
//   float num = -13.1;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_4) {
//   char format[] = "%#G";
//   char str1[100];
//   char str2[100];
//   float num = 12.0;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_5) {
//   char format[] = "%0G";
//   char str1[100];
//   char str2[100];
//   float num = 1233.003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_6) {
//   char format[] = "%-+G";
//   char str1[100];
//   char str2[100];
//   float num = 0.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_7) {
//   char format[] = "%-+ G";
//   char str1[100];
//   char str2[100];
//   float num = 33.33;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_8) {
//   char format[] = "%-+ #G";
//   char str1[100];
//   char str2[100];
//   float num = 103.1157;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_9) {
//   char format[] = "%-+ #0G";
//   char str1[100];
//   char str2[100];
//   float num = 23.127;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_10) {
//   char format[] = "%+#-0 G";
//   char str1[100];
//   char str2[100];
//   float num = -123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_11) {
//   char format[] = "%10G";
//   char str1[100];
//   char str2[100];
//   float num = 123123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_12) {
//   char format[] = "%-10G";
//   char str1[100];
//   char str2[100];
//   float num = 0;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_13) {
//   char format[] = "%+10G";
//   char str1[100];
//   char str2[100];
//   float num = -1;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_14) {
//   char format[] = "% 10G";
//   char str1[100];
//   char str2[100];
//   float num = 0.003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_15) {
//   char format[] = "%#10G";
//   char str1[100];
//   char str2[100];
//   float num = 0.999999;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_16) {
//   char format[] = "%010G";
//   char str1[100];
//   char str2[100];
//   float num = 9.99999;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_17) {
//   char format[] = "%-+10G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_18) {
//   char format[] = "%-+ 10G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_19) {
//   char format[] = "%-+ #10G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_20) {
//   char format[] = "%-+ #010G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_21) {
//   char format[] = "%+#-0 10G";
//   char str1[100];
//   char str2[100];
//   float num = 0.10203;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_22) {
//   char format[] = "%+#-0 *G";
//   char str1[100];
//   char str2[100];
//   int num1 = 10;
//   float num2 = 3;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_23) {
//   char format[] = "%.6G";
//   char str1[100];
//   char str2[100];
//   float num = 1243.3;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_24) {
//   char format[] = "%.0G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_25) {
//   char format[] = "%.2G";
//   char str1[100];
//   char str2[100];
//   float num = -20.00123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_26) {
//   char format[] = "%.3G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_27) {
//   char format[] = "%-.6G";
//   char str1[100];
//   char str2[100];
//   float num = 0;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_28) {
//   char format[] = "%+.6G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_29) {
//   char format[] = "% .6G";
//   char str1[100];
//   char str2[100];
//   float num = 1;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_30) {
//   char format[] = "%#.6G";
//   char str1[100];
//   char str2[100];
//   float num = 103.100001;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_31) {
//   char format[] = "%0.6G";
//   char str1[100];
//   char str2[100];
//   float num = 0.999999;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_32) {
//   char format[] = "%-+.6G";
//   char str1[100];
//   char str2[100];
//   float num = 100;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_33) {
//   char format[] = "%-+ .6G";
//   char str1[100];
//   char str2[100];
//   float num = 10033.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_34) {
//   char format[] = "%-+ #.6G";
//   char str1[100];
//   char str2[100];
//   float num = 123.123;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_35) {
//   char format[] = "%-+ #0.6G";
//   char str1[100];
//   char str2[100];
//   float num = -1.00003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_36) {
//   char format[] = "%+#-0 .6G";
//   char str1[100];
//   char str2[100];
//   float num = 0.13;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_37) {
//   char format[] = "%+#-0 .*G";
//   char str1[100];
//   char str2[100];
//   int num1 = 10;
//   float num2 = 3;
//
//   int res1 = s21_sprintf(str1, format, num1, num2);
//   int res2 = sprintf(str2, format, num1, num2);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_38) {
//   char format[] = "%+#-0 10.6G";
//   char str1[100];
//   char str2[100];
//   float num = 3.12301;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_39) {
//   char format[] = "%+#-0 10.3G";
//   char str1[100];
//   char str2[100];
//   float num = 23.12003;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_flags_40) {
//   char format[] = "%+#-0 3.6G";
//   char str1[100];
//   char str2[100];
//   float num = 103.023;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_long_1) {
//   char format[] = "%lG";
//   char str1[100];
//   char str2[100];
//   double num = 13000000000000000;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST
//
// START_TEST(sprintf_spec_G_long_2) {
//   char format[] = "%LG";
//   char str1[100];
//   char str2[100];
//   long double num = 1e-309;
//
//   int res1 = s21_sprintf(str1, format, num);
//   int res2 = sprintf(str2, format, num);
//   ck_assert_int_eq(res1, res2);
//   ck_assert_str_eq(str1, str2);
// }
// END_TEST

START_TEST(sprintf_spec_o_1) {
  char format[] = "%o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_2) {
  char format[] = "str: %o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_3) {
  char format[] = "%ostr1";
  char str1[100];
  char str2[100];
  int d = +228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_4) {
  char format[] = "%o%o";
  char str1[100];
  char str2[100];
  int d1 = -228;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_5) {
  char format[] = "%o %o";
  char str1[100];
  char str2[100];
  int d1 = 0x228;
  int d2 = 13;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_6) {
  char format[] = "%ostr\n%o";
  char str1[100];
  char str2[100];
  int d1 = 0xff;
  int d2 = 1;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_7) {
  char format[] = "%o\t%o";
  char str1[100];
  char str2[100];
  int d1 = 228;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_1) {
  char format[] = "%-o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_2) {
  char format[] = "%+o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_3) {
  char format[] = "% o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_4) {
  char format[] = "%#o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_5) {
  char format[] = "%0o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_6) {
  char format[] = "%-+o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_7) {
  char format[] = "%-+ o";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_8) {
  char format[] = "%-+ #o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_9) {
  char format[] = "%-+ #0o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_10) {
  char format[] = "%+#-0 o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_11) {
  char format[] = "%10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_12) {
  char format[] = "%-10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_13) {
  char format[] = "%+10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_14) {
  char format[] = "% 10o";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_15) {
  char format[] = "%#10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_16) {
  char format[] = "%010o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_17) {
  char format[] = "%-+10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_18) {
  char format[] = "%-+ 10o";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_19) {
  char format[] = "%-+ #10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_20) {
  char format[] = "%-+ #010o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_21) {
  char format[] = "%+#-0 10o";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_22) {
  char format[] = "%+#-0 *o";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_23) {
  char format[] = "%.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_24) {
  char format[] = "%.0o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_25) {
  char format[] = "%.2o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_26) {
  char format[] = "%.3o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_27) {
  char format[] = "%-.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_28) {
  char format[] = "%+.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_29) {
  char format[] = "% .10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_30) {
  char format[] = "%#.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_31) {
  char format[] = "%0.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_32) {
  char format[] = "%-+.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_33) {
  char format[] = "%-+ .10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_34) {
  char format[] = "%-+ #.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_35) {
  char format[] = "%-+ #0.10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_36) {
  char format[] = "%+#-0 .10o";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_37) {
  char format[] = "%+#-0 .*o";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_38) {
  char format[] = "%+#-0 10.10o";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_39) {
  char format[] = "%+#-0 10.3o";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_flags_40) {
  char format[] = "%+#-0 3.10o";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_long_1) {
  char format[] = "%ho";
  char str1[100];
  char str2[100];
  short int d = INT8_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_long_2) {
  char format[] = "%lo";
  char str1[100];
  char str2[100];
  long int d = INT32_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_o_long_3) {
  char format[] = "%llo";
  char str1[100];
  char str2[100];
  long long int d = INT64_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_1) {
  char format[] = "%s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_2) {
  char format[] = "str: %s";
  char str1[100];
  char str2[100];
  char *str = "Hello    ";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_3) {
  char format[] = "%sstr1";
  char str1[100];
  char str2[100];
  char *str = "     World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_4) {
  char format[] = "%s%s";
  char str1[100];
  char str2[100];
  char *str = "Hello ";
  char *Str = "World";

  int res1 = s21_sprintf(str1, format, str, Str);
  int res2 = sprintf(str2, format, str, Str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_5) {
  char format[] = "%s %s";
  char str1[100];
  char str2[100];
  char *str = "H";
  char *Str = "W";

  int res1 = s21_sprintf(str1, format, str, Str);
  int res2 = sprintf(str2, format, str, Str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_6) {
  char format[] = "%sstr\n%s";
  char str1[100];
  char str2[100];
  char *str = "123\n";
  char *Str = "\t\t222";

  int res1 = s21_sprintf(str1, format, str, Str);
  int res2 = sprintf(str2, format, str, Str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_7) {
  char format[] = "%s\t%s";
  char str1[100];
  char str2[100];
  char *str = "";
  char *Str = "";

  int res1 = s21_sprintf(str1, format, str, Str);
  int res2 = sprintf(str2, format, str, Str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_1) {
  char format[] = "%-s";
  char str1[100];
  char str2[100];
  char *str = "       Hello";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_2) {
  char format[] = "%+s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_3) {
  char format[] = "% s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_4) {
  char format[] = "%#s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_5) {
  char format[] = "%0s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_6) {
  char format[] = "%-+s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_7) {
  char format[] = "%-+ s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_8) {
  char format[] = "%-+ #s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_9) {
  char format[] = "%-+ #0s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_10) {
  char format[] = "%+#-0 s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_11) {
  char format[] = "%10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_12) {
  char format[] = "%-10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_13) {
  char format[] = "%+10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_14) {
  char format[] = "% 10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_15) {
  char format[] = "%#10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_16) {
  char format[] = "%010s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_17) {
  char format[] = "%-+10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_18) {
  char format[] = "%-+ 10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_19) {
  char format[] = "%-+ #10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_20) {
  char format[] = "%-+ #010s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_21) {
  char format[] = "%+#-0 10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_22) {
  char format[] = "%+#-0 *s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";
  int d = 10;

  int res1 = s21_sprintf(str1, format, d, str);
  int res2 = sprintf(str2, format, d, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_23) {
  char format[] = "%.10s";
  char str1[100];
  char str2[100];
  char *str = "";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_24) {
  char format[] = "%-.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_25) {
  char format[] = "%+.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_26) {
  char format[] = "% .10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_27) {
  char format[] = "%#.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_28) {
  char format[] = "%0.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_29) {
  char format[] = "%-+.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_30) {
  char format[] = "%-+ .10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_31) {
  char format[] = "%-+ #.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_32) {
  char format[] = "%-+ #0.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_33) {
  char format[] = "%+#-0 .10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_34) {
  char format[] = "%+#-0 .*s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";
  int d = 10;

  int res1 = s21_sprintf(str1, format, d, str);
  int res2 = sprintf(str2, format, d, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_35) {
  char format[] = "%+#-0 10.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_36) {
  char format[] = "%+#-0 10.3s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_37) {
  char format[] = "% s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_s_flags_38) {
  char format[] = "%+#-0 3.10s";
  char str1[100];
  char str2[100];
  char *str = "Hello World";

  int res1 = s21_sprintf(str1, format, str);
  int res2 = sprintf(str2, format, str);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_1) {
  char format[] = "%u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_2) {
  char format[] = "str: %u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_3) {
  char format[] = "%ustr1";
  char str1[100];
  char str2[100];
  int d = +228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_4) {
  char format[] = "%u%u";
  char str1[100];
  char str2[100];
  int d1 = -228;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_5) {
  char format[] = "%u %u";
  char str1[100];
  char str2[100];
  int d1 = 0x228;
  int d2 = 13;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_6) {
  char format[] = "%ustr\n%u";
  char str1[100];
  char str2[100];
  int d1 = 0xff;
  int d2 = 1;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_7) {
  char format[] = "%u\t%u";
  char str1[100];
  char str2[100];
  int d1 = 228;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_1) {
  char format[] = "%-u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_2) {
  char format[] = "%+u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_3) {
  char format[] = "% u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_4) {
  char format[] = "%#u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_5) {
  char format[] = "%0u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_6) {
  char format[] = "%-+u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_7) {
  char format[] = "%-+ u";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_8) {
  char format[] = "%-+ #u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_9) {
  char format[] = "%-+ #0u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_10) {
  char format[] = "%+#-0 u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_11) {
  char format[] = "%10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_12) {
  char format[] = "%-10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_13) {
  char format[] = "%+10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_14) {
  char format[] = "% 10u";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_15) {
  char format[] = "%#10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_16) {
  char format[] = "%010u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_17) {
  char format[] = "%-+10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_18) {
  char format[] = "%-+ 10u";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_19) {
  char format[] = "%-+ #10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_20) {
  char format[] = "%-+ #010u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_21) {
  char format[] = "%+#-0 10u";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_22) {
  char format[] = "%+#-0 *u";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_23) {
  char format[] = "%.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_24) {
  char format[] = "%.0u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_25) {
  char format[] = "%.2u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_26) {
  char format[] = "%.3u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_27) {
  char format[] = "%-.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_28) {
  char format[] = "%+.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_29) {
  char format[] = "% .10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_30) {
  char format[] = "%#.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_31) {
  char format[] = "%0.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_32) {
  char format[] = "%-+.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_33) {
  char format[] = "%-+ .10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_34) {
  char format[] = "%-+ #.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_35) {
  char format[] = "%-+ #0.10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_36) {
  char format[] = "%+#-0 .10u";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_37) {
  char format[] = "%+#-0 .*u";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_38) {
  char format[] = "%+#-0 10.10u";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_39) {
  char format[] = "%+#-0 10.3u";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_flags_40) {
  char format[] = "%+#-0 3.10u";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_long_1) {
  char format[] = "%hu";
  char str1[100];
  char str2[100];
  short int d = INT8_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_long_2) {
  char format[] = "%lu";
  char str1[100];
  char str2[100];
  long int d = INT32_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_u_long_3) {
  char format[] = "%llu";
  char str1[100];
  char str2[100];
  long long int d = INT64_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_1) {
  char format[] = "%x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_2) {
  char format[] = "str: %x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_3) {
  char format[] = "%xstr1";
  char str1[100];
  char str2[100];
  int d = +228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_4) {
  char format[] = "%x%x";
  char str1[100];
  char str2[100];
  int d1 = -228;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_5) {
  char format[] = "%x %x";
  char str1[100];
  char str2[100];
  int d1 = 0x228;
  int d2 = 13;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_6) {
  char format[] = "%xstr\n%x";
  char str1[100];
  char str2[100];
  int d1 = 0xff;
  int d2 = 1;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_7) {
  char format[] = "%x\t%x";
  char str1[100];
  char str2[100];
  int d1 = 228;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_1) {
  char format[] = "%-x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_2) {
  char format[] = "%+x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_3) {
  char format[] = "% x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_4) {
  char format[] = "%#x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_5) {
  char format[] = "%0x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_6) {
  char format[] = "%-+x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_7) {
  char format[] = "%-+ x";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_8) {
  char format[] = "%-+ #x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_9) {
  char format[] = "%-+ #0x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_10) {
  char format[] = "%+#-0 x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_11) {
  char format[] = "%10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_12) {
  char format[] = "%-10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_13) {
  char format[] = "%+10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_14) {
  char format[] = "% 10x";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_15) {
  char format[] = "%#10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_16) {
  char format[] = "%010x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_17) {
  char format[] = "%-+10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_18) {
  char format[] = "%-+ 10x";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_19) {
  char format[] = "%-+ #10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_20) {
  char format[] = "%-+ #010x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_21) {
  char format[] = "%+#-0 10x";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_22) {
  char format[] = "%+#-0 *x";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_23) {
  char format[] = "%.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_24) {
  char format[] = "%.0x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_25) {
  char format[] = "%.2x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_26) {
  char format[] = "%.3x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_27) {
  char format[] = "%-.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_28) {
  char format[] = "%+.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_29) {
  char format[] = "% .10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_30) {
  char format[] = "%#.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_31) {
  char format[] = "%0.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_32) {
  char format[] = "%-+.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_33) {
  char format[] = "%-+ .10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_34) {
  char format[] = "%-+ #.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_35) {
  char format[] = "%-+ #0.10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_36) {
  char format[] = "%+#-0 .10x";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_37) {
  char format[] = "%+#-0 .*x";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_38) {
  char format[] = "%+#-0 10.10x";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_39) {
  char format[] = "%+#-0 10.3x";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_flags_40) {
  char format[] = "%+#-0 3.10x";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_long_1) {
  char format[] = "%hx";
  char str1[100];
  char str2[100];
  short int d = INT8_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_long_2) {
  char format[] = "%lx";
  char str1[100];
  char str2[100];
  long int d = INT32_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_x_long_3) {
  char format[] = "%llx";
  char str1[100];
  char str2[100];
  long long int d = INT64_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_1) {
  char format[] = "%X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_2) {
  char format[] = "str: %X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_3) {
  char format[] = "%Xstr1";
  char str1[100];
  char str2[100];
  int d = +228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_4) {
  char format[] = "%X%X";
  char str1[100];
  char str2[100];
  int d1 = -228;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_5) {
  char format[] = "%X %X";
  char str1[100];
  char str2[100];
  int d1 = 0x228;
  int d2 = 13;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_6) {
  char format[] = "%Xstr\n%X";
  char str1[100];
  char str2[100];
  int d1 = 0xff;
  int d2 = 1;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_7) {
  char format[] = "%X\t%X";
  char str1[100];
  char str2[100];
  int d1 = 228;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_1) {
  char format[] = "%-X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_2) {
  char format[] = "%+X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_3) {
  char format[] = "% X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_4) {
  char format[] = "%#X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_5) {
  char format[] = "%0X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_6) {
  char format[] = "%-+X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_7) {
  char format[] = "%-+ X";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_8) {
  char format[] = "%-+ #X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_9) {
  char format[] = "%-+ #0X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_10) {
  char format[] = "%+#-0 X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_11) {
  char format[] = "%10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_12) {
  char format[] = "%-10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_13) {
  char format[] = "%+10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_14) {
  char format[] = "% 10X";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_15) {
  char format[] = "%#10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_16) {
  char format[] = "%010X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_17) {
  char format[] = "%-+10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_18) {
  char format[] = "%-+ 10X";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_19) {
  char format[] = "%-+ #10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_20) {
  char format[] = "%-+ #010X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_21) {
  char format[] = "%+#-0 10X";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_22) {
  char format[] = "%+#-0 *X";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_23) {
  char format[] = "%.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_24) {
  char format[] = "%.0X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_25) {
  char format[] = "%.2X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_26) {
  char format[] = "%.3X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_27) {
  char format[] = "%-.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_28) {
  char format[] = "%+.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_29) {
  char format[] = "% .10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_30) {
  char format[] = "%#.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_31) {
  char format[] = "%0.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_32) {
  char format[] = "%-+.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_33) {
  char format[] = "%-+ .10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_34) {
  char format[] = "%-+ #.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_35) {
  char format[] = "%-+ #0.10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_36) {
  char format[] = "%+#-0 .10X";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_37) {
  char format[] = "%+#-0 .*X";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_38) {
  char format[] = "%+#-0 10.10X";
  char str1[100];
  char str2[100];
  int num = 0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_39) {
  char format[] = "%+#-0 10.3X";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_flags_40) {
  char format[] = "%+#-0 3.10X";
  char str1[100];
  char str2[100];
  int num = 0;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_long_1) {
  char format[] = "%hX";
  char str1[100];
  char str2[100];
  short int d = INT8_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_long_2) {
  char format[] = "%lX";
  char str1[100];
  char str2[100];
  long int d = INT32_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_X_long_3) {
  char format[] = "%llX";
  char str1[100];
  char str2[100];
  long long int d = INT64_MAX;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_1) {
  char format[] = "%p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_2) {
  char format[] = "str: %p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_3) {
  char format[] = "%pstr1";
  char str1[100];
  char str2[100];
  int d = +228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_4) {
  char format[] = "%p%p";
  char str1[100];
  char str2[100];
  int d1 = -228;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_5) {
  char format[] = "%p %p";
  char str1[100];
  char str2[100];
  int d1 = 0x228;
  int d2 = 13;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_6) {
  char format[] = "%pstr\n%p";
  char str1[100];
  char str2[100];
  int d1 = 0xff;
  int d2 = 1;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_7) {
  char format[] = "%p\t%p";
  char str1[100];
  char str2[100];
  int d1 = 228;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_1) {
  char format[] = "%-p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_2) {
  char format[] = "%+p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_3) {
  char format[] = "% p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_4) {
  char format[] = "%#p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_5) {
  char format[] = "%0p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_6) {
  char format[] = "%-+p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_7) {
  char format[] = "%-+ p";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_8) {
  char format[] = "%-+ #p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_9) {
  char format[] = "%-+ #0p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_10) {
  char format[] = "%+#-0 p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_11) {
  char format[] = "%10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_12) {
  char format[] = "%-10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_13) {
  char format[] = "%+10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_14) {
  char format[] = "% 10p";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_15) {
  char format[] = "%#10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_16) {
  char format[] = "%010p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_17) {
  char format[] = "%-+10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_18) {
  char format[] = "%-+ 10p";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_19) {
  char format[] = "%-+ #10p";
  char str1[100];
  char str2[100];
  int d = 0;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_20) {
  char format[] = "%-+ #010p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_21) {
  char format[] = "%+#-0 10p";
  char str1[100];
  char str2[100];
  int d = -228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_22) {
  char format[] = "%+#-0 *p";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 0;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_23) {
  char format[] = "%.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_24) {
  char format[] = "%.0p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_25) {
  char format[] = "%.2p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_26) {
  char format[] = "%.3p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_27) {
  char format[] = "%-.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_28) {
  char format[] = "%+.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_29) {
  char format[] = "% .10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_30) {
  char format[] = "%#.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_31) {
  char format[] = "%0.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_32) {
  char format[] = "%-+.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_33) {
  char format[] = "%-+ .10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_34) {
  char format[] = "%-+ #.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_35) {
  char format[] = "%-+ #0.10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_36) {
  char format[] = "%+#-0 .10p";
  char str1[100];
  char str2[100];
  int d = 228;

  int res1 = s21_sprintf(str1, format, d);
  int res2 = sprintf(str2, format, d);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_37) {
  char format[] = "%+#-0 .*p";
  char str1[100];
  char str2[100];
  int d1 = 10;
  int d2 = 228;

  int res1 = s21_sprintf(str1, format, d1, d2);
  int res2 = sprintf(str2, format, d1, d2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_38) {
  char format[] = "%+#-0 10.10p";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_39) {
  char format[] = "%+#-0 10.3p";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_p_flags_40) {
  char format[] = "%+#-0 3.10p";
  char str1[100];
  char str2[100];
  int num = 123;

  int res1 = s21_sprintf(str1, format, num);
  int res2 = sprintf(str2, format, num);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_spec_n_1) {
  char format[] = "%n";
  char str1[100];
  char str2[100];
  int num1 = 0;
  int num2 = 0;

  int res1 = s21_sprintf(str1, format, &num1);
  int res2 = sprintf(str2, "%n", &num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(num1, num2);
}
END_TEST

START_TEST(sprintf_spec_n_2) {
  char format[] = "str: %n";
  char str1[100];
  char str2[100];
  int num1 = 0;
  int num2 = 0;

  int res1 = s21_sprintf(str1, format, &num1);
  int res2 = sprintf(str2, "str: %n", &num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(num1, num2);
}
END_TEST

START_TEST(sprintf_spec_n_3) {
  char format[] = "%nstr!";
  char str1[100];
  char str2[100];
  int num1 = 0;
  int num2 = 0;

  int res1 = s21_sprintf(str1, format, &num1);
  int res2 = sprintf(str2, "%nstr!", &num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(num1, num2);
}
END_TEST

START_TEST(sprintf_spec_n_4) {
  char format[] = "%d%n";
  char str1[100];
  char str2[100];
  int integer = 228;
  int num1 = 0;
  int num2 = 0;

  int res1 = s21_sprintf(str1, format, integer, &num1);
  int res2 = sprintf(str2, "%d%n", integer, &num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(num1, num2);
}
END_TEST

START_TEST(sprintf_spec_n_5) {
  char format[] = "%d%n%d";
  char str1[100];
  char str2[100];
  int integer = 228;
  int num1 = 0;
  int num2 = 0;

  int res1 = s21_sprintf(str1, format, integer, &num1, integer);
  int res2 = sprintf(str2, "%d%n%d", integer, &num2, integer);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(num1, num2);
}
END_TEST

START_TEST(sprintf_spec_n_6) {
  char format[] = "%d\n%s\t%d%n";
  char str1[100];
  char str2[100];
  int integer = 228;
  char *str = "Hello World";
  int num1 = 0;
  int num2 = 0;

  int res1 = s21_sprintf(str1, format, integer, str, integer, &num1);
  int res2 = sprintf(str2, "%d\n%s\t%d%n", integer, str, integer, &num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(num1, num2);
}
END_TEST

START_TEST(sprintf_mixed_format_1) {
  char format[] = "%d\n%.2s\t%-+3.d%%ggf1111******";
  char str1[100];
  char str2[100];
  int integer = 228;
  char *str = "Hello World";
  int num1 = 0;
  int num2 = 0;

  int res1 = s21_sprintf(str1, format, integer, str, integer, &num1);
  int res2 = sprintf(str2, format, integer, str, integer, &num2);
  ck_assert_int_eq(res1, res2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(num1, num2);
}
END_TEST

START_TEST(simple_int) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple value %d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(precise_int) {
  char str1[100];
  char str2[100];

  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_int) {
  char str1[100];
  char str2[100];

  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(minus_width_int) {
  char str1[100];
  char str2[100];

  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(plus_width_int) {
  char str1[100];
  char str2[100];

  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(padding_int) {
  char str1[100];
  char str2[100];

  char *format = "%012i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(star_width_int) {
  char str1[100];
  char str2[100];

  char *format = "%0*d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(star_precision_int) {
  char str1[100];
  char str2[100];

  char *format = "%0.*i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(many_flags_many_ints) {
  char str1[100];
  char str2[100];

  char format[] = "%0.*i %d %4.*i %013d %d";
  int val = 69;
  ck_assert_int_eq(
      s21_sprintf(str1, format, 5, val, -10431, 13, 5311, 0, -581813581),
      sprintf(str2, format, 5, val, -10431, 13, 5311, 0, -581813581));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flags_long_int) {
  char str1[100];
  char str2[100];

  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flags_short_int) {
  char str1[100];
  char str2[100];

  char *format = "%-16.9hi";
  short int val = 6958;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flags_another_long_int) {
  char str1[100];
  char str2[100];

  char *format = "%0.*ld";
  long val = 8581385185;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(space_flag_int) {
  char str1[100];
  char str2[100];

  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val) {
  char str1[100];
  char str2[100];

  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_width) {
  char str1[100];
  char str2[100];

  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_flags) {
  char str1[100];
  char str2[100];

  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_precision) {
  char str1[100];
  char str2[100];

  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(unsigned_val_many_flags) {
  char str1[100];
  char str2[100];

  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(unsigned_val_short) {
  char str1[100];
  char str2[100];

  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_long) {
  char str1[100];
  char str2[100];

  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_many) {
  char str1[100];
  char str2[100];

  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(octal_width) {
  char str1[100];
  char str2[100];

  char *format = "%15o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal_flags) {
  char str1[100];
  char str2[100];

  char *format = "%-16o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal_precision) {
  char str1[100];
  char str2[100];

  char *format = "%.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(octal_many_flags) {
  char str1[100];
  char str2[100];

  char *format = "%-5.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal_zero) {
  char str1[100];
  char str2[100];

  char *format = "%o";
  ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, 0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal_hash) {
  char str1[100];
  char str2[100];

  char *format = "%#o";
  int val = 57175;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(octal_short) {
  char str1[100];
  char str2[100];

  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal_long) {
  char str1[100];
  char str2[100];

  char *format = "%lo";
  long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal_many) {
  char str1[100];
  char str2[100];

  char *format = "%lo, %o, %ho, %.5o, %5.o";
  long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(octal) {
  char str1[100];
  char str2[100];

  char *format = "%lo";
  long int val = 84518;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_zero) {
  char str1[100];
  char str2[100];

  char *format = "%u";
  ck_assert_int_eq(s21_sprintf(str1, format, 0),
                   sprintf(str2, format, (unsigned)0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(hex_width) {
  char str1[100];
  char str2[100];

  char *format = "%5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(hex_flags) {
  char str1[100];
  char str2[100];

  char *format = "%#-10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_precision) {
  char str1[100];
  char str2[100];

  char *format = "%.15x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_many) {
  char str1[100];
  char str2[100];

  char *format = "%#-10x%x%X%#x%#X%5.5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val, val, val, val, val),
                   sprintf(str2, format, val, val, val, val, val, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_many_flags) {
  char str1[100];
  char str2[100];

  char *format = "%#-5.10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_zero) {
  char str1[100];
  char str2[100];

  char *format = "%#x";
  unsigned val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_huge) {
  char str1[100];
  char str2[100];

  char *format = "%#x";
  unsigned val = 18571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_short) {
  char str1[100];
  char str2[100];

  char *format = "%#hx";
  unsigned short val = 12352;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_long) {
  char str1[100];
  char str2[100];

  char *format = "%#lx";
  unsigned long val = 18571757371571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(hex_one_longer_width) {
  char str1[100];
  char str2[100];

  char *format = "%#2x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(hex_two_longer_width) {
  char str1[100];
  char str2[100];

  char *format = "%#30x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_char) {
  char str1[100];
  char str2[100];

  char *format = "%c";
  char val = 'X';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(one_precision) {
  char str1[100];
  char str2[100];

  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_flags) {
  char str1[100];
  char str2[100];

  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_width) {
  char str1[100];
  char str2[100];

  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_many) {
  char str1[100];
  char str2[100];

  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_many_flags) {
  char str1[100];
  char str2[100];

  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string) {
  char str1[100];
  char str2[100];

  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(string_precision) {
  char str1[100];
  char str2[100];

  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(string_width) {
  char str1[100];
  char str2[100];

  char *format = "%15s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(string_flags) {
  char str1[100];
  char str2[100];

  char *format = "%-15.9s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_long) {
  char str1[100];
  char str2[100];

  char *format = "%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(string_many) {
//     char str1[100];
//     char str2[100];
//
//     char *format = "%s%s%s%s";
//     char *val =
//         "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
//     char *s1 = "";
//     char *s2 = "87418347813748913749871389480913";
//     char *s3 = "HAHAABOBASUCKER";
//     ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
//                      sprintf(str2, format, val, s1, s2, s3));
//
//     ck_assert_str_eq(str1, str2);
// }
// END_TEST
START_TEST(ptr) {
  char str1[100];
  char str2[100];

  char *format = "%p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(ptr_width) {
  char str1[100];
  char str2[100];

  char *format = "%15p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(ptr_precision) {
  char str1[100];
  char str2[100];

  char *format = "%.5p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(null_ptr) {
  char str1[100];
  char str2[100];

  char *format = "%p";
  char *ptr = NULL;
  ck_assert_int_eq(s21_sprintf(str1, format, ptr), sprintf(str2, format, ptr));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START_TEST(string_width_huge) {
//     char str1[100];
//     char str2[100];
//     char *val = "kjafdiuhfjahfjdahf";
//     char *format = "%120s";
//     ck_assert_int_eq(s21_sprintf(str1, format, val),
//                      sprintf(str2, format, val));
//
//     ck_assert_str_eq(str1, str2);
// }
// END_TEST
START_TEST(n_specifier) {
  char str1[100];
  char str2[100];
  int ret = 0;
  char *format = "Hello, my sexy little aboba abobushka abobina %n";
  ck_assert_int_eq(s21_sprintf(str1, format, &ret),
                   sprintf(str2, format, &ret));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(float_precision) {
  char str1[100];
  char str2[100];
  char *format = "%Lf";
  long double val = 513515.131513515151351;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(float_width) {
  char str1[100];
  char str2[100];
  char *format = "%10Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(float_precision_zero) {
  char str1[100];
  char str2[100];
  char *format = "%.0Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(float_precision_empty) {
  char str1[100];
  char str2[100];
  char *format = "%.Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(float_precision_huge) {
  char str1[100];
  char str2[100];
  char *format = "%.15Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(float_precision_huge_negative) {
  char str1[100];
  char str2[100];
  char *format = "%.15Lf";
  long double val = -15.35581134;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(float_huge) {
  char str1[100];
  char str2[100];
  char *format = "%Lf";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(float_flags) {
  char str1[100];
  char str2[100];
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(float_many) {
  char str1[100];
  char str2[100];
  char *format = "% .0f %.lf %Lf %f %lf %Lf";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 9851.51351;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(e_precision) {
  char str1[100];
  char str2[100];
  char *format = "%.17Le";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(e_precision_zero) {
  char str1[100];
  char str2[100];
  char *format = "%.0Le";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(e_precision_empty) {
  char str1[100];
  char str2[100];
  char *format = "%.Le";
  long double val = 15.000009121;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(e_precision_huge) {
  char str1[100];
  char str2[100];
  char *format = "%.15Le";
  long double val = 0.000000000000000123;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(e_precision_huge_negative) {
  char str1[100];
  char str2[100];
  char *format = "%.15Le";
  long double val = -15.35581134;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(e_huge) {
  char str1[100];
  char str2[100];
  char *format = "%Le";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(e_flags) {
  char str1[100];
  char str2[100];
  char *format = "%015E";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(e_width) {
  char str1[100];
  char str2[100];
  char *format = "%15e";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(E_int) {
  char str1[100];
  char str2[100];
  char *format = "%.17LE";
  long double val = 4134121;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(all_empty) {
  char str1[100];
  char str2[100];
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(empty_format_and_parameters) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_char) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                   sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_string) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_string) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_dec) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_dec) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_int) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_int) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_float) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                   sprintf(str2, "%f", 0.0001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_float) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
      sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_unsigned_dec) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                   sprintf(str2, "%u", (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_unsigned_dec) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                   sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                           (unsigned)666, (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char_with_alignment_left) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char_with_alignment_right) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_char_with_alignment) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START HEX TEST
START_TEST(test_one_hex_lower) {
  char str1[100];
  char str2[100];
  ck_assert_int_eq(s21_sprintf(str1, "%x", (unsigned)INT32_MIN),
                   sprintf(str2, "%x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", INT32_MAX),
                   sprintf(str2, "%x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_upper) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%X", (unsigned)INT32_MIN),
                   sprintf(str2, "%X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", INT32_MAX),
                   sprintf(str2, "%X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_lower) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_upper) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST

// START HEX WITH ALIGNMENT
START_TEST(test_one_hex_lower_with_alignment_left) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%-3x", (unsigned)INT32_MIN),
                   sprintf(str2, "%-3x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", 0), sprintf(str2, "%-3x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", INT32_MAX),
                   sprintf(str2, "%-3x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_lower_with_alignment_right) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%13x", (unsigned)INT32_MIN),
                   sprintf(str2, "%13x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", 0), sprintf(str2, "%13x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", INT32_MAX),
                   sprintf(str2, "%13x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_upper_with_alignment_left) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MIN),
                   sprintf(str2, "%-60X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", 0), sprintf(str2, "%-60X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MAX),
                   sprintf(str2, "%-60X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_upper_with_alignment_right) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%7X", (unsigned)INT32_MIN),
                   sprintf(str2, "%7X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", 0), sprintf(str2, "%7X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", INT32_MAX),
                   sprintf(str2, "%7X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_lower_with_alignment) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_upper_with_alignment) {
  char str1[100];
  char str2[100];
  ck_assert_int_eq(
      s21_sprintf(str1, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// START HEX WITH ALIGNMENT

// START HEX TEST WITH #
START_TEST(test_one_hex_with_hashtag) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MIN),
                   sprintf(str2, "%#x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", 0), sprintf(str2, "%#x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MAX),
                   sprintf(str2, "%#x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_upper_with_hashtag) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MIN),
                   sprintf(str2, "%#X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", 0), sprintf(str2, "%#X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MAX),
                   sprintf(str2, "%#X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_lower_with_hashtag_and_alignm) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_upper_with_hashtag_and_alignm) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH #

// START HEX TEST with width *
START_TEST(test_one_hex_lower_with_width_star) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MIN),
                   sprintf(str2, "%*x", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, 0),
                   sprintf(str2, "%*x", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MAX),
                   sprintf(str2, "%*x", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_upper_with_width_star) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MIN),
                   sprintf(str2, "%*X", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, 0),
                   sprintf(str2, "%*X", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MAX),
                   sprintf(str2, "%*X", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_lower_with_width_star_and_align_and_hashtag) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%#*x%*x%-12x%3x%*x", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*x%*x%-12x%3x%*x", 9, 127312897, -0, -1,
                           199, -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_upper_with_width_star) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1, 199,
                           -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH Width *

// START HEX TEST WITH precision
START_TEST(test_one_hex_lower_with_precision) {
  char str1[100];
  char str2[100];

  int a = s21_sprintf(str1, "%*.6x", 11, 0);
  int b = sprintf(str2, "%*.6x", 11, 0);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_upper_with_precision) {
  char str1[100];
  char str2[100];

  int a = s21_sprintf(str1, "%*.6X", 11, INT32_MIN);
  int b = sprintf(str2, "%*.6X", 11, (unsigned)INT32_MIN);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_lower_with_precision_and_other) {
  char str1[100];
  char str2[100];
  int a = s21_sprintf(
      str1, "%#3.*x%#3x%-7.*x%#-1.8x%4.3x%#2.15x%*.*x%*.1x%3x%-1x", 3, 126714,
      4444444, 0, 6423235, 0, 666, 999, 13, 5, 419, 9, 41, -41, 33);
  int b = sprintf(str2, "%#3.*x%#3x%-7.*x%#-1.8x%4.3x%#2.15x%*.*x%*.1x%3x%-1x",
                  3, 126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, 419, 9,
                  41, -41, 33);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_hex_upper_with_precision_and_other) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(
      s21_sprintf(str1, "%#3.*X%#3x%-7.*X%#-1.8X%4.3X%#2.15x%*.*X%*.1X%3X%-1X",
                  3, -126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, -419, 9,
                  41, -41, 33),
      sprintf(str2, "%#3.*X%#3x%-7.*X%#-1.8X%4.3X%#2.15x%*.*X%*.1X%3X%-1X", 3,
              -126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, -419, 9, 41,
              -41, 33));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH precision

// START HEX TEST WITH Length
START_TEST(test_one_hex_lower_with_length) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%hx", -11),
                   sprintf(str2, "%hx", (unsigned short)-11));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 0),
                   sprintf(str2, "%hx", (unsigned short)0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 11),
                   sprintf(str2, "%hx", (unsigned short)11));
  ck_assert_str_eq(str1, str2);
  long unsigned int val = INT32_MAX;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", val), sprintf(str2, "%lx", val));
  ck_assert_str_eq(str1, str2);
  long unsigned int v = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", v), sprintf(str2, "%lx", v));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_hex_upper_with_length) {
  char str1[100];
  char str2[100];

  ck_assert_int_eq(s21_sprintf(str1, "%hx", -11),
                   sprintf(str2, "%hx", (unsigned short)-11));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 0),
                   sprintf(str2, "%hx", (unsigned short)0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 11),
                   sprintf(str2, "%hx", (unsigned short)11));
  ck_assert_str_eq(str1, str2);
  long unsigned int val = INT32_MAX;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", val), sprintf(str2, "%lx", val));
  ck_assert_str_eq(str1, str2);
  long unsigned int v = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", v), sprintf(str2, "%lx", v));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf1) {
  char str1[100];
  char str2[100];
  char format[] = "%10ld";

  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf2) {
  char str1[100];
  char str2[100];
  char format[] = "%1.1f";

  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf3) {
  char str1[100];
  char str2[100];
  char format[] = "%8.3c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf4) {
  char str1[100];
  char str2[100];
  char format[] = "%+5.5d aboba";

  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf6) {
  char str1[100];
  char str2[100];
  char format[] = "%7.7f";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf7) {
  char str1[100];
  char str2[100];
  char format[] = "%7.4s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf8) {
  char str1[100];
  char str2[100];
  char format[] = "%6.6u";

  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf9) {
  char str1[100];
  char str2[100];
  char format[] = "%li%ld%lu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                   sprintf(str2, format, 666666666666, 777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf10) {
  char str1[100];
  char str2[100];
  char format[] = "%hi%hd%hu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                   sprintf(str2, format, 666, -777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf11) {
  char str1[100];
  char str2[100];
  char format[] = "%+li%+lu%+d%+lf";

  ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                   sprintf(str2, format, -123, 321, -5555, -1213.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf12) {
  char str1[100];
  char str2[100];
  char format[] = "%-11.11li%-35.5lu%-3.5ld%33.19Lf";
  long double k = 333.33213;

  ck_assert_int_eq(
      s21_sprintf(str1, format, 66666666666, 5555555555, 44444444444, k),
      sprintf(str2, format, 66666666666, 5555555555, 44444444444, k));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf14) {
  char str1[100];
  char str2[100];
  char format[] = "% 0.0li% 0.0lu% 0.0ld % 0.0lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf15) {
  char str1[100];
  char str2[100];
  char format[] = "% 0.0hi% 0.0hu% 0.0hd % 0.0hf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf16) {
  char str1[100];
  char str2[100];
  char format[] = "% c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf17) {
  char str1[100];
  char str2[100];
  char format[] = "% s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf18) {
  char str1[100];
  char str2[100];
  char format[] = "% s% c";

  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf24) {
  char str1[100];
  char str2[100];
  char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

  ck_assert_int_eq(
      s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                  "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
      sprintf(str2, format, 'f', 21, 42, 666.666,
              "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf25) {
  char str1[100];
  char str2[100];
  char format[] = "%.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf26) {
  char str1[100];
  char str2[100];
  // char format[] = "%%";

  ck_assert_int_eq(s21_sprintf(str1, "%%"), sprintf(str2, "%%"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf27) {
  char str1[100];
  char str2[100];
  // char format[] = "%%%%%%%%";

  ck_assert_int_eq(s21_sprintf(str1, "%%%%%%%%"), sprintf(str2, "%%%%%%%%"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf28) {
  char str1[100];
  char str2[100];
  int n1;
  int n2;
  int a = s21_sprintf(str1, "%d%n", 123, &n1);
  int b = sprintf(str2, "%d%n", 123, &n2);

  ck_assert_int_eq(a, b);
  ck_assert_int_eq(n1, n2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf29) {
  char str1[100];
  char str2[100];
  char format[] = "%-.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                   sprintf(str2, format, 111.111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf30) {
  char str1[100];
  char str2[100];
  char format[] = "%-.1d";

  ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf31) {
  char str1[100];
  char str2[100];
  char format[] = "%e";
  double x = 111;
  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf33) {
  char str1[100];
  char str2[100];
  char format[] = "%Le";
  long double x = 122.1231;

  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf35) {
  char str1[100];
  char str2[100];
  char format[] = "%.10e";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.184314818),
                   sprintf(str2, format, 111.184314818));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf36) {
  char str1[100];
  char str2[100];
  char format[] = "%5.3e%3.2e%lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.000111, 111.555, 1.999),
                   sprintf(str2, format, 0.000111, 111.555, 1.999));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf37) {
  char str1[100];
  char str2[100];
  char format[] = "%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.666666),
                   sprintf(str2, format, 0.666666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf38) {
  char str1[100];
  char str2[100];
  char format[] = "%E%E%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.0000999, 111.9999, 6.666),
                   sprintf(str2, format, 0.0000999, 111.9999, 6.666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf39) {
  char str1[100];
  char str2[100];
  char format[] = "%e ABOBA %Lf %Lf %Le";
  long double c = 848181;
  long double a = 0.00000001;
  long double b = 1111111.11;
  ck_assert_int_eq(s21_sprintf(str1, format, 123.123, a, b, c),
                   sprintf(str2, format, 123.123, a, b, c));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf40) {
  char str1[100];
  char str2[100];
  char format[] = "%#e Floppa %#E%#f";

  ck_assert_int_eq(s21_sprintf(str1, format, 123.111, 0.0000999, 0.555),
                   sprintf(str2, format, 123.111, 0.0000999, 0.555));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf41) {
  char str1[100];
  char str2[100];
  char format[] = "%.Lf";
  long double a = 7.9418438184;

  ck_assert_int_eq(s21_sprintf(str1, format, a), sprintf(str2, format, a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf42) {
  char str1[100];
  char str2[100];
  char format[] = "%#5p";
  int a = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, &a), sprintf(str2, format, &a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf43) {
  char str1[100];
  char str2[100];
  char format[] = "%.5o";

  ck_assert_int_eq(s21_sprintf(str1, format, 12345),
                   sprintf(str2, format, 12345));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf44) {
  char str1[100];
  char str2[100];
  char format[] = "%#5lX";
  long hex = 314818438141;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_char) {
  char str1[100];
  char str2[100];

  char *format = "This is a simple wide char %5c";
  char w = 'c';
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}

// START_TEST(wide_string2) {
//     char str1[100];
//     char str2[100];
//
//     char *format = "This is a simple wide char %120ls ABOBA";
//     wchar_t w[] = L"森我爱菠萝";
//     int a = s21_sprintf(str1, format, w);
//     int b = sprintf(str2, format, w);
//     ck_assert_str_eq(str1, str2);
//     ck_assert_int_eq(a, b);
// }
// END_TEST

Suite *test_sprintf() {
  Suite *suite = suite_create("s21_sprintf");
  TCase *tcase_sprintf = tcase_create("case_sprintf");

  tcase_add_test(tcase_sprintf, sprintf_spec_c_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_c_long_1);

  tcase_add_test(tcase_sprintf, sprintf_spec_d_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_long_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_long_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_d_long_3);

  tcase_add_test(tcase_sprintf, sprintf_spec_i_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_long_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_long_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_i_long_3);

  tcase_add_test(tcase_sprintf, sprintf_spec_e_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_e_long_2);

  tcase_add_test(tcase_sprintf, sprintf_spec_E_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_E_long_2);

  tcase_add_test(tcase_sprintf, sprintf_spec_f_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_long_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_f_long_2);

  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_1);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_2);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_3);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_4);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_5);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_6);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_7);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_1);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_2);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_3);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_4);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_5);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_6);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_7);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_8);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_9);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_10);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_11);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_12);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_13);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_14);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_15);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_16);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_17);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_18);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_19);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_20);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_21);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_22);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_23);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_24);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_25);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_26);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_27);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_28);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_29);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_30);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_31);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_32);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_33);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_34);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_35);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_36);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_37);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_38);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_39);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_flags_40);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_long_1);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_g_long_2);
  //
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_1);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_2);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_3);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_4);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_5);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_6);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_7);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_1);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_2);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_3);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_4);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_5);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_6);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_7);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_8);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_9);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_10);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_11);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_12);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_13);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_14);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_15);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_16);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_17);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_18);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_19);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_20);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_21);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_22);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_23);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_24);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_25);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_26);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_27);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_28);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_29);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_30);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_31);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_32);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_33);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_34);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_35);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_36);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_37);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_38);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_39);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_flags_40);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_long_1);
  //   tcase_add_test(tcase_sprintf, sprintf_spec_G_long_2);

  tcase_add_test(tcase_sprintf, sprintf_spec_o_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_long_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_long_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_o_long_3);

  tcase_add_test(tcase_sprintf, sprintf_spec_s_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_s_flags_38);

  tcase_add_test(tcase_sprintf, sprintf_spec_u_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_long_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_long_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_u_long_3);

  tcase_add_test(tcase_sprintf, sprintf_spec_x_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_long_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_long_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_x_long_3);

  tcase_add_test(tcase_sprintf, sprintf_spec_X_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_flags_40);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_long_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_long_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_X_long_3);

  tcase_add_test(tcase_sprintf, sprintf_spec_p_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_6);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_7);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_8);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_9);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_10);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_11);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_12);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_13);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_14);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_15);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_16);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_17);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_18);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_19);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_20);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_21);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_22);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_23);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_24);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_25);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_26);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_27);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_28);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_29);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_30);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_31);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_32);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_33);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_34);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_35);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_36);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_37);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_38);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_39);
  tcase_add_test(tcase_sprintf, sprintf_spec_p_flags_40);

  tcase_add_test(tcase_sprintf, sprintf_spec_n_1);
  tcase_add_test(tcase_sprintf, sprintf_spec_n_2);
  tcase_add_test(tcase_sprintf, sprintf_spec_n_3);
  tcase_add_test(tcase_sprintf, sprintf_spec_n_4);
  tcase_add_test(tcase_sprintf, sprintf_spec_n_5);
  tcase_add_test(tcase_sprintf, sprintf_spec_n_6);

  tcase_add_test(tcase_sprintf, sprintf_mixed_format_1);

  tcase_add_test(tcase_sprintf, simple_int);
  tcase_add_test(tcase_sprintf, precise_int);
  tcase_add_test(tcase_sprintf, width_int);
  tcase_add_test(tcase_sprintf, minus_width_int);
  tcase_add_test(tcase_sprintf, plus_width_int);
  tcase_add_test(tcase_sprintf, padding_int);
  tcase_add_test(tcase_sprintf, star_width_int);
  tcase_add_test(tcase_sprintf, star_precision_int);
  tcase_add_test(tcase_sprintf, many_flags_many_ints);
  tcase_add_test(tcase_sprintf, flags_long_int);
  tcase_add_test(tcase_sprintf, flags_short_int);
  tcase_add_test(tcase_sprintf, flags_another_long_int);
  tcase_add_test(tcase_sprintf, space_flag_int);
  tcase_add_test(tcase_sprintf, unsigned_val);
  tcase_add_test(tcase_sprintf, unsigned_val_width);
  tcase_add_test(tcase_sprintf, unsigned_val_flags);
  tcase_add_test(tcase_sprintf, unsigned_val_precision);
  tcase_add_test(tcase_sprintf, unsigned_val_many_flags);
  tcase_add_test(tcase_sprintf, unsigned_val_short);
  tcase_add_test(tcase_sprintf, unsigned_val_long);
  tcase_add_test(tcase_sprintf, unsigned_val_many);
  tcase_add_test(tcase_sprintf, octal);
  tcase_add_test(tcase_sprintf, octal_width);
  tcase_add_test(tcase_sprintf, octal_flags);
  tcase_add_test(tcase_sprintf, octal_precision);
  tcase_add_test(tcase_sprintf, octal_many_flags);
  tcase_add_test(tcase_sprintf, octal_short);
  tcase_add_test(tcase_sprintf, octal_long);
  tcase_add_test(tcase_sprintf, octal_many);
  tcase_add_test(tcase_sprintf, octal_zero);
  tcase_add_test(tcase_sprintf, octal_hash);
  tcase_add_test(tcase_sprintf, unsigned_zero);
  tcase_add_test(tcase_sprintf, hex_width);
  tcase_add_test(tcase_sprintf, hex_flags);
  tcase_add_test(tcase_sprintf, hex_precision);
  tcase_add_test(tcase_sprintf, hex_many);
  tcase_add_test(tcase_sprintf, hex_many_flags);
  tcase_add_test(tcase_sprintf, hex_zero);
  tcase_add_test(tcase_sprintf, hex_huge);
  tcase_add_test(tcase_sprintf, hex_short);
  tcase_add_test(tcase_sprintf, hex_long);
  tcase_add_test(tcase_sprintf, hex_one_longer_width);
  tcase_add_test(tcase_sprintf, hex_two_longer_width);
  tcase_add_test(tcase_sprintf, one_char);
  tcase_add_test(tcase_sprintf, one_precision);
  tcase_add_test(tcase_sprintf, one_flags);
  tcase_add_test(tcase_sprintf, one_width);
  tcase_add_test(tcase_sprintf, one_many_flags);
  tcase_add_test(tcase_sprintf, string);
  tcase_add_test(tcase_sprintf, string_precision);
  tcase_add_test(tcase_sprintf, string_width);
  tcase_add_test(tcase_sprintf, string_flags);
  tcase_add_test(tcase_sprintf, string_long);
  //    tcase_add_test(tcase_sprintf,string_many);
  tcase_add_test(tcase_sprintf, ptr);
  tcase_add_test(tcase_sprintf, ptr_width);
  tcase_add_test(tcase_sprintf, ptr_precision);
  tcase_add_test(tcase_sprintf, null_ptr);
  tcase_add_test(tcase_sprintf, n_specifier);
  //    tcase_add_test(tcase_sprintf,string_width_huge);
  tcase_add_test(tcase_sprintf, float_precision);
  tcase_add_test(tcase_sprintf, float_width);
  tcase_add_test(tcase_sprintf, float_precision_zero);
  tcase_add_test(tcase_sprintf, float_precision_empty);
  tcase_add_test(tcase_sprintf, float_precision_huge);
  tcase_add_test(tcase_sprintf, float_precision_huge_negative);
  tcase_add_test(tcase_sprintf, float_huge);
  tcase_add_test(tcase_sprintf, float_flags);
  tcase_add_test(tcase_sprintf, float_many);
  tcase_add_test(tcase_sprintf, e_precision);
  tcase_add_test(tcase_sprintf, e_precision_zero);
  tcase_add_test(tcase_sprintf, e_precision_empty);
  tcase_add_test(tcase_sprintf, e_precision_huge);
  tcase_add_test(tcase_sprintf, e_precision_huge_negative);
  tcase_add_test(tcase_sprintf, e_huge);
  tcase_add_test(tcase_sprintf, one_many);
  tcase_add_test(tcase_sprintf, e_width);
  tcase_add_test(tcase_sprintf, e_flags);
  tcase_add_test(tcase_sprintf, E_int);
  tcase_add_test(tcase_sprintf, all_empty);
  tcase_add_test(tcase_sprintf, empty_format_and_parameters);
  tcase_add_test(tcase_sprintf, test_one_char);
  tcase_add_test(tcase_sprintf, test_many_char);
  tcase_add_test(tcase_sprintf, test_one_string);
  tcase_add_test(tcase_sprintf, test_many_string);
  tcase_add_test(tcase_sprintf, test_one_dec);
  tcase_add_test(tcase_sprintf, test_many_dec);
  tcase_add_test(tcase_sprintf, test_one_int);
  tcase_add_test(tcase_sprintf, test_many_int);
  tcase_add_test(tcase_sprintf, test_one_float);
  tcase_add_test(tcase_sprintf, test_many_float);
  tcase_add_test(tcase_sprintf, test_one_unsigned_dec);
  tcase_add_test(tcase_sprintf, test_many_unsigned_dec);
  tcase_add_test(tcase_sprintf, test_one_char_with_alignment_left);
  tcase_add_test(tcase_sprintf, test_one_char_with_alignment_right);
  tcase_add_test(tcase_sprintf, test_many_char_with_alignment);
  tcase_add_test(tcase_sprintf, test_one_hex_lower);
  tcase_add_test(tcase_sprintf, test_one_hex_upper);
  tcase_add_test(tcase_sprintf, test_many_hex_lower);
  tcase_add_test(tcase_sprintf, test_many_hex_upper);
  tcase_add_test(tcase_sprintf, test_one_hex_lower_with_alignment_left);
  tcase_add_test(tcase_sprintf, test_one_hex_lower_with_alignment_right);
  tcase_add_test(tcase_sprintf, test_one_hex_upper_with_alignment_left);
  tcase_add_test(tcase_sprintf, test_one_hex_upper_with_alignment_right);
  tcase_add_test(tcase_sprintf, test_many_hex_lower_with_alignment);
  tcase_add_test(tcase_sprintf, test_many_hex_upper_with_alignment);
  tcase_add_test(tcase_sprintf, test_one_hex_with_hashtag);
  tcase_add_test(tcase_sprintf, test_one_hex_upper_with_hashtag);
  tcase_add_test(tcase_sprintf, test_many_hex_lower_with_hashtag_and_alignm);
  tcase_add_test(tcase_sprintf, test_many_hex_upper_with_hashtag_and_alignm);
  tcase_add_test(tcase_sprintf, test_one_hex_lower_with_width_star);
  tcase_add_test(tcase_sprintf, test_one_hex_upper_with_width_star);
  tcase_add_test(tcase_sprintf,
                 test_many_hex_lower_with_width_star_and_align_and_hashtag);
  tcase_add_test(tcase_sprintf, test_many_hex_upper_with_width_star);
  tcase_add_test(tcase_sprintf, test_one_hex_lower_with_precision);
  tcase_add_test(tcase_sprintf, test_one_hex_upper_with_precision);
  tcase_add_test(tcase_sprintf, test_many_hex_lower_with_precision_and_other);
  tcase_add_test(tcase_sprintf, test_many_hex_upper_with_precision_and_other);
  tcase_add_test(tcase_sprintf, test_one_hex_lower_with_length);
  tcase_add_test(tcase_sprintf, test_one_hex_upper_with_length);
  tcase_add_test(tcase_sprintf, test_sprintf1);
  tcase_add_test(tcase_sprintf, test_sprintf2);
  tcase_add_test(tcase_sprintf, test_sprintf3);
  tcase_add_test(tcase_sprintf, test_sprintf4);
  tcase_add_test(tcase_sprintf, test_sprintf6);
  tcase_add_test(tcase_sprintf, test_sprintf7);
  tcase_add_test(tcase_sprintf, test_sprintf8);
  tcase_add_test(tcase_sprintf, test_sprintf9);
  tcase_add_test(tcase_sprintf, test_sprintf10);
  tcase_add_test(tcase_sprintf, test_sprintf11);
  tcase_add_test(tcase_sprintf, test_sprintf12);
  tcase_add_test(tcase_sprintf, test_sprintf14);
  tcase_add_test(tcase_sprintf, test_sprintf15);
  tcase_add_test(tcase_sprintf, test_sprintf16);
  tcase_add_test(tcase_sprintf, test_sprintf17);
  tcase_add_test(tcase_sprintf, test_sprintf18);
  tcase_add_test(tcase_sprintf, test_sprintf24);
  tcase_add_test(tcase_sprintf, test_sprintf25);
  tcase_add_test(tcase_sprintf, test_sprintf28);
  tcase_add_test(tcase_sprintf, test_sprintf29);
  tcase_add_test(tcase_sprintf, test_sprintf30);
  tcase_add_test(tcase_sprintf, test_sprintf31);
  tcase_add_test(tcase_sprintf, test_sprintf33);
  tcase_add_test(tcase_sprintf, test_sprintf35);
  tcase_add_test(tcase_sprintf, test_sprintf36);
  tcase_add_test(tcase_sprintf, test_sprintf37);
  tcase_add_test(tcase_sprintf, test_sprintf38);
  tcase_add_test(tcase_sprintf, test_sprintf39);
  tcase_add_test(tcase_sprintf, test_sprintf40);
  tcase_add_test(tcase_sprintf, test_sprintf41);
  tcase_add_test(tcase_sprintf, test_sprintf42);
  tcase_add_test(tcase_sprintf, test_sprintf43);
  tcase_add_test(tcase_sprintf, test_sprintf44);
  tcase_add_test(tcase_sprintf, test_sprintf26);
  tcase_add_test(tcase_sprintf, test_sprintf27);
  tcase_add_test(tcase_sprintf, width_char);

  suite_add_tcase(suite, tcase_sprintf);

  return suite;
}
