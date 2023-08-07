#include "../s21_test.h"

START_TEST(test1_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%u %u %u %u %u %d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test2_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%2u %2u %2u %2u %2u %2d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test3_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5u %.5u %.5u %.5u %.5u %.5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test4_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5u %2.5u %2.5u %2.5u %2.5u %2.5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test5_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-u %-u %-u %-u %-u %-d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test6_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2u %-2u %-2u %-2u %-2u %-2d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test7_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5u %-.5u %-.5u %-.5u %-.5u %-.5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test8_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5u %-2.5u %-2.5u %-2.5u %-2.5u %-2.5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test9_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+u %+u %+u %+u %+u %+d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test10_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2u %+2u %+2u %+2u %+2u %+2d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test11_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5u %+.5u %+.5u %+.5u %+.5u %+.5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test12_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5u %+2.5u %+2.5u %+2.5u %+2.5u %+2.5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test13_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% u % u % u % u % u % d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test14_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2u % 2u % 2u % 2u % 2u % 2d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test15_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5u % .5u % .5u % .5u % .5u % .5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test16_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5u % 2.5u % 2.5u % 2.5u % 2.5u % 2.5d";
  unsigned int a = 1, b = -1, c = 0;
  unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test17_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%lu %lu %lu %lu %lu %ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test18_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%2lu %2lu %2lu %2lu %2lu %2ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test19_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5lu %.5lu %.5lu %.5lu %.5lu %.5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test20_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5lu %2.5lu %2.5lu %2.5lu %2.5lu %2.5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test21_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-lu %-lu %-lu %-lu %-lu %-ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test22_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2lu %-2lu %-2lu %-2lu %-2lu %-2ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test23_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5lu %-.5lu %-.5lu %-.5lu %-.5lu %-.5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test24_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5lu %-2.5lu %-2.5lu %-2.5lu %-2.5lu %-2.5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test25_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+lu %+lu %+lu %+lu %+lu %+ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test26_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2lu %+2lu %+2lu %+2lu %+2lu %+2ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test27_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5lu %+.5lu %+.5lu %+.5lu %+.5lu %+.5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test28_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5lu %+2.5lu %+2.5lu %+2.5lu %+2.5lu %+2.5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test29_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% lu % lu % lu % lu % lu % ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test30_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2lu % 2lu % 2lu % 2lu % 2lu % 2ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test31_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5lu % .5lu % .5lu % .5lu % .5lu % .5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test32_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5lu % 2.5lu % 2.5lu % 2.5lu % 2.5lu % 2.5ld";
  long unsigned int a = 1, b = -1, c = 0;
  long unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test33_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%hu %hu %hu %hu %hu %hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test34_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%2hu %2hu %2hu %2hu %2hu %2hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test35_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5hu %.5hu %.5hu %.5hu %.5hu %.5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test36_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5hu %2.5hu %2.5hu %2.5hu %2.5hu %2.5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test37_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-hu %-hu %-hu %-hu %-hu %-hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test38_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2hu %-2hu %-2hu %-2hu %-2hu %-2hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test39_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5hu %-.5hu %-.5hu %-.5hu %-.5hu %-.5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test40_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5hu %-2.5hu %-2.5hu %-2.5hu %-2.5hu %-2.5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test41_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+hu %+hu %+hu %+hu %+hu %+hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test42_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2hu %+2hu %+2hu %+2hu %+2hu %+2hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test43_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5hu %+.5hu %+.5hu %+.5hu %+.5hu %+.5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test44_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5hu %+2.5hu %+2.5hu %+2.5hu %+2.5hu %+2.5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test45_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% hu % hu % hu % hu % hu % hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test46_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2hu % 2hu % 2hu % 2hu % 2hu % 2hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test47_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5hu % .5hu % .5hu % .5hu % .5hu % .5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test48_sprintf_u) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5hu % 2.5hu % 2.5hu % 2.5hu % 2.5hu % 2.5hd";
  short unsigned int a = 1, b = -1, c = 0;
  short unsigned int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

Suite *test_sprintf_u() {
  Suite *suite = suite_create("sprintf_u");
  TCase *tcase = tcase_create("sprintf_u_tcase");

  tcase_add_test(tcase, test1_sprintf_u);
  tcase_add_test(tcase, test2_sprintf_u);
  tcase_add_test(tcase, test3_sprintf_u);
  tcase_add_test(tcase, test4_sprintf_u);
  tcase_add_test(tcase, test5_sprintf_u);
  tcase_add_test(tcase, test6_sprintf_u);
  tcase_add_test(tcase, test7_sprintf_u);
  tcase_add_test(tcase, test8_sprintf_u);
  tcase_add_test(tcase, test9_sprintf_u);
  tcase_add_test(tcase, test10_sprintf_u);
  tcase_add_test(tcase, test11_sprintf_u);
  tcase_add_test(tcase, test12_sprintf_u);
  tcase_add_test(tcase, test13_sprintf_u);
  tcase_add_test(tcase, test14_sprintf_u);
  tcase_add_test(tcase, test15_sprintf_u);
  tcase_add_test(tcase, test16_sprintf_u);
  tcase_add_test(tcase, test17_sprintf_u);
  tcase_add_test(tcase, test18_sprintf_u);
  tcase_add_test(tcase, test19_sprintf_u);
  tcase_add_test(tcase, test20_sprintf_u);
  tcase_add_test(tcase, test21_sprintf_u);
  tcase_add_test(tcase, test22_sprintf_u);
  tcase_add_test(tcase, test23_sprintf_u);
  tcase_add_test(tcase, test24_sprintf_u);
  tcase_add_test(tcase, test25_sprintf_u);
  tcase_add_test(tcase, test26_sprintf_u);
  tcase_add_test(tcase, test27_sprintf_u);
  tcase_add_test(tcase, test28_sprintf_u);
  tcase_add_test(tcase, test29_sprintf_u);
  tcase_add_test(tcase, test30_sprintf_u);
  tcase_add_test(tcase, test31_sprintf_u);
  tcase_add_test(tcase, test32_sprintf_u);
  tcase_add_test(tcase, test33_sprintf_u);
  tcase_add_test(tcase, test34_sprintf_u);
  tcase_add_test(tcase, test35_sprintf_u);
  tcase_add_test(tcase, test36_sprintf_u);
  tcase_add_test(tcase, test37_sprintf_u);
  tcase_add_test(tcase, test38_sprintf_u);
  tcase_add_test(tcase, test39_sprintf_u);
  tcase_add_test(tcase, test40_sprintf_u);
  tcase_add_test(tcase, test41_sprintf_u);
  tcase_add_test(tcase, test42_sprintf_u);
  tcase_add_test(tcase, test43_sprintf_u);
  tcase_add_test(tcase, test44_sprintf_u);
  tcase_add_test(tcase, test45_sprintf_u);
  tcase_add_test(tcase, test46_sprintf_u);
  tcase_add_test(tcase, test47_sprintf_u);
  tcase_add_test(tcase, test48_sprintf_u);

  suite_add_tcase(suite, tcase);
  return suite;
}
