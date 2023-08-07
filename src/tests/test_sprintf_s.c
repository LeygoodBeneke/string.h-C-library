#include "../s21_test.h"

START_TEST(test3_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5s %.5s %.5s %.5s %.5s %.5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test4_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5s %2.5s %2.5s %2.5s %2.5s %2.5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test7_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5s %-.5s %-.5s %-.5s %-.5s %-.5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test8_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5s %-2.5s %-2.5s %-2.5s %-2.5s %-2.5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test11_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5s %+.5s %+.5s %+.5s %+.5s %+.5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test12_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5s %+2.5s %+2.5s %+2.5s %+2.5s %+2.5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test15_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5s % .5s % .5s % .5s % .5s % .5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test16_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5s % 2.5s % 2.5s % 2.5s % 2.5s % 2.5s";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test35_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5hs %.5hs %.5hs %.5hs %.5hs %.5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test36_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5hs %2.5hs %2.5hs %2.5hs %2.5hs %2.5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test39_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5hs %-.5hs %-.5hs %-.5hs %-.5hs %-.5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test40_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5hs %-2.5hs %-2.5hs %-2.5hs %-2.5hs %-2.5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test43_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5hs %+.5hs %+.5hs %+.5hs %+.5hs %+.5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test44_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5hs %+2.5hs %+2.5hs %+2.5hs %+2.5hs %+2.5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test47_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5hs % .5hs % .5hs % .5hs % .5hs % .5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test48_sprintf_s) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5hs % 2.5hs % 2.5hs % 2.5hs % 2.5hs % 2.5hs";
  char *a = "";
  char *b = "\0";
  char *c = "Hello, world!";
  char *d = "a";
  char *e = "1234567890";
  char *f = "\n\0\t";
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

Suite *test_sprintf_s() {
  Suite *suite = suite_create("sprintf_s");
  TCase *tcase = tcase_create("sprintf_s_tcase");

  tcase_add_test(tcase, test3_sprintf_s);
  tcase_add_test(tcase, test4_sprintf_s);
  tcase_add_test(tcase, test7_sprintf_s);
  tcase_add_test(tcase, test8_sprintf_s);

  tcase_add_test(tcase, test11_sprintf_s);
  tcase_add_test(tcase, test12_sprintf_s);
  tcase_add_test(tcase, test15_sprintf_s);
  tcase_add_test(tcase, test16_sprintf_s);

  tcase_add_test(tcase, test35_sprintf_s);
  tcase_add_test(tcase, test36_sprintf_s);

  tcase_add_test(tcase, test39_sprintf_s);
  tcase_add_test(tcase, test40_sprintf_s);

  tcase_add_test(tcase, test43_sprintf_s);
  tcase_add_test(tcase, test44_sprintf_s);

  tcase_add_test(tcase, test47_sprintf_s);
  tcase_add_test(tcase, test48_sprintf_s);

  suite_add_tcase(suite, tcase);
  return suite;
}
