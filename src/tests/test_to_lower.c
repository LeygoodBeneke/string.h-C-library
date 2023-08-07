#include "../s21_test.h"

START_TEST(test1_to_lower) {
  char str[] = "Hello, world!";
  char res[] = "hello, world!";
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test2_to_lower) {
  char str[] = "hELLO, WORLD!";
  char res[] = "hello, world!";
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test3_to_lower) {
  char str[] = "Hello, worlD";
  char res[] = "hello, world";
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test4_to_lower) {
  char str[] = "1234567890";
  char res[] = "1234567890";
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test5_to_lower) {
  char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char res[] = "abcdefghijklmnopqrstuvwxyz";
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test6_to_lower) {
  char str[] = "";
  char *res = NULL;
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test7_to_lower) {
  char str[] = "!@#$%^&*()_+-=<>";
  char res[] = "!@#$%^&*()_+-=<>";
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

START_TEST(test8_to_lower) {
  char str[] = "AaAaAaAaAaA";
  char res[] = "aaaaaaaaaaa";
  char *ptr = (char *)s21_to_lower(str);
  ck_assert_pstr_eq(ptr, res);
  free(ptr);
}
END_TEST

Suite *test_to_lower() {
  Suite *suite = suite_create("to_lower");
  TCase *tcase = tcase_create("to_lower_tcase");

  tcase_add_test(tcase, test1_to_lower);
  tcase_add_test(tcase, test2_to_lower);
  tcase_add_test(tcase, test3_to_lower);
  tcase_add_test(tcase, test4_to_lower);
  tcase_add_test(tcase, test5_to_lower);
  tcase_add_test(tcase, test6_to_lower);
  tcase_add_test(tcase, test7_to_lower);
  tcase_add_test(tcase, test8_to_lower);

  suite_add_tcase(suite, tcase);
  return suite;
}
