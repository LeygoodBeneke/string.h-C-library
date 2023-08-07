#include "../s21_test.h"

START_TEST(test1_to_upper) {
  char str[] = "Hello, world!";
  char res[] = "HELLO, WORLD!";
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test2_to_upper) {
  char str[] = "hELLO, WORLD!";
  char res[] = "HELLO, WORLD!";
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test3_to_upper) {
  char str[] = "Hello, worlD";
  char res[] = "HELLO, WORLD";
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test4_to_upper) {
  char str[] = "1234567890";
  char res[] = "1234567890";
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test5_to_upper) {
  char str[] = "abcdefghijklmnopqrstuvwxyz";
  char res[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test6_to_upper) {
  char str[] = "";
  char *res = NULL;
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test7_to_upper) {
  char str[] = "!@#$%^&*()_+-=<>";
  char res[] = "!@#$%^&*()_+-=<>";
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test8_to_upper) {
  char str[] = "AaAaAaAaAaA";
  char res[] = "AAAAAAAAAAA";
  char *ptr = (char *)s21_to_upper(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

Suite *test_to_upper() {
  Suite *suite = suite_create("to_upper");
  TCase *tcase = tcase_create("to_upper_tcase");

  tcase_add_test(tcase, test1_to_upper);
  tcase_add_test(tcase, test2_to_upper);
  tcase_add_test(tcase, test3_to_upper);
  tcase_add_test(tcase, test4_to_upper);
  tcase_add_test(tcase, test5_to_upper);
  tcase_add_test(tcase, test6_to_upper);
  tcase_add_test(tcase, test7_to_upper);
  tcase_add_test(tcase, test8_to_upper);

  suite_add_tcase(suite, tcase);
  return suite;
}
