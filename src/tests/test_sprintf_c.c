#include "../s21_test.h"

START_TEST(test1_sprintf_c) {
  char str1[100] = {};
  char str2[100] = {};
  char *str3 = "%c %c %c %c %c %c";
  int a = 'a', b = 'v', c = 'z';
  int d = 'h', e = 'd', f = 'b';
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test2_sprintf_c) {
  char str1[100] = {};
  char str2[100] = {};
  char *str3 = "%2c %2c %2c %2c %2c %2c";
  int a = 'A', b = 'a', c = 'z';
  int d = 'F', e = 'z', f = 'y';
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test3_sprintf_c) {
  char str1[100] = {};
  char str2[100] = {};
  char *str3 = "%.5c %.5c %.5c %.5c %.5c %.5c";
  int a = 1, b = 1, c = 12;
  int d = 65, e = 65, f = 23;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test4_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5c %2.5c %2.5c %2.5c %2.5c %2.5c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test5_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-c %-c %-c %-c %-c %-c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test6_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2c %-2c %-2c %-2c %-2c %-2c";
  int a = 'a', b = 'b', c = 'c';
  int d = 'h', e = 't', f = 'e';
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test7_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5c %-.5c %-.5c %-.5c %-.5c %-.5c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test8_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5c %-2.5c %-2.5c %-2.5c %-2.5c %-2.5c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test9_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+c %+c %+c %+c %+c %+c";
  int a = 'a', b = 'b', c = 'c';
  int d = 'h', e = 't', f = 'e';
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test10_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2c %+2c %+2c %+2c %+2c %+2c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test11_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5c %+.5c %+.5c %+.5c %+.5c %+.5c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test12_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5c %+2.5c %+2.5c %+2.5c %+2.5c %+2.5c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test13_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% c % c % c % c % c % c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test14_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2c % 2c % 2c % 2c % 2c % 2c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test15_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5c % .5c % .5c % .5c % .5c % .5c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test16_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5c % 2.5c % 2.5c % 2.5c % 2.5c % 2.5c";
  int a = 1, b = -1, c = 0;
  int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test33_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%hc %hc %hc %hc %hc %hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test34_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%2hc %2hc %2hc %2hc %2hc %2hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
}
END_TEST

START_TEST(test35_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5hc %.5hc %.5hc %.5hc %.5hc %.5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test36_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5hc %2.5hc %2.5hc %2.5hc %2.5hc %2.5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test37_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-hc %-hc %-hc %-hc %-hc %-hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test38_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2hc %-2hc %-2hc %-2hc %-2hc %-2hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test39_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5hc %-.5hc %-.5hc %-.5hc %-.5hc %-.5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test40_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5hc %-2.5hc %-2.5hc %-2.5hc %-2.5hc %-2.5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test41_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+hc %+hc %+hc %+hc %+hc %+hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test42_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2hc %+2hc %+2hc %+2hc %+2hc %+2hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test43_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5hc %+.5hc %+.5hc %+.5hc %+.5hc %+.5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test44_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5hc %+2.5hc %+2.5hc %+2.5hc %+2.5hc %+2.5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test45_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% hc % hc % hc % hc % hc % hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test46_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2hc % 2hc % 2hc % 2hc % 2hc % 2hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test47_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5hc % .5hc % .5hc % .5hc % .5hc % .5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test48_sprintf_c) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5hc % 2.5hc % 2.5hc % 2.5hc % 2.5hc % 2.5hc";
  short int a = 1, b = -1, c = 0;
  short int d = 65, e = -65, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

Suite *test_sprintf_c() {
  Suite *suite = suite_create("sprintf_c");
  TCase *tcase = tcase_create("sprintf_c_tcase");

  tcase_add_test(tcase, test1_sprintf_c);
  tcase_add_test(tcase, test2_sprintf_c);
  tcase_add_test(tcase, test3_sprintf_c);
  tcase_add_test(tcase, test4_sprintf_c);
  tcase_add_test(tcase, test5_sprintf_c);
  tcase_add_test(tcase, test6_sprintf_c);
  tcase_add_test(tcase, test7_sprintf_c);
  tcase_add_test(tcase, test8_sprintf_c);
  tcase_add_test(tcase, test9_sprintf_c);
  tcase_add_test(tcase, test10_sprintf_c);
  tcase_add_test(tcase, test11_sprintf_c);
  tcase_add_test(tcase, test12_sprintf_c);
  tcase_add_test(tcase, test13_sprintf_c);
  tcase_add_test(tcase, test14_sprintf_c);
  tcase_add_test(tcase, test15_sprintf_c);
  tcase_add_test(tcase, test16_sprintf_c);

  tcase_add_test(tcase, test33_sprintf_c);
  tcase_add_test(tcase, test34_sprintf_c);
  tcase_add_test(tcase, test35_sprintf_c);
  tcase_add_test(tcase, test36_sprintf_c);
  tcase_add_test(tcase, test37_sprintf_c);
  tcase_add_test(tcase, test38_sprintf_c);
  tcase_add_test(tcase, test39_sprintf_c);
  tcase_add_test(tcase, test40_sprintf_c);
  tcase_add_test(tcase, test41_sprintf_c);
  tcase_add_test(tcase, test42_sprintf_c);
  tcase_add_test(tcase, test43_sprintf_c);
  tcase_add_test(tcase, test44_sprintf_c);
  tcase_add_test(tcase, test45_sprintf_c);
  tcase_add_test(tcase, test46_sprintf_c);
  tcase_add_test(tcase, test47_sprintf_c);
  tcase_add_test(tcase, test48_sprintf_c);

  suite_add_tcase(suite, tcase);
  return suite;
}
