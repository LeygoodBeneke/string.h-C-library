#include "../s21_test.h"

START_TEST(test1_sprintf_percent) {
  char str1[100] = "";
  char str2[100] = "";
  char str3[] = "%% %d";
  int a = 012;
  ck_assert_int_eq(s21_sprintf(str1, str3, a), sprintf(str2, str3, a));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test2_sprintf_percent) {
  char str1[100];
  char str2[100];
  char str3[] = "%d %%%% %d";
  int a = 012;
  int b = 017;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b), sprintf(str2, str3, a, b));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test3_sprintf_percent) {
  char str1[100];
  char str2[100];
  char str3[] = "%d Te%%st %d Test %d";
  int a = 3015;
  int b = 712;
  int c = 99;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c),
                   sprintf(str2, str3, a, b, c));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

Suite *test_sprintf_percent(void) {
  Suite *suite = suite_create("sprintf_percent");
  TCase *tcase = tcase_create("sprintf_percent_tcase");

  tcase_add_test(tcase, test1_sprintf_percent);
  tcase_add_test(tcase, test2_sprintf_percent);
  tcase_add_test(tcase, test3_sprintf_percent);

  suite_add_tcase(suite, tcase);
  return suite;
}
