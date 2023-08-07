#include "../s21_test.h"

START_TEST(test1_trim) {
  char s1[30] = "-?hello, world!";
  char s3[] = "!?-";
  char s4[] = "hello, world";
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test2_trim) {
  char s1[30] = "";
  char s3[] = "";
  char *s4 = NULL;
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test3_trim) {
  char *s1 = NULL;
  char s3[] = "";
  char *s4 = NULL;
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST
START_TEST(test4_trim) {
  char s1[30] = "!!!abcdefghij!?!";
  char s3[] = "!?";
  char s4[] = "abcdefghij";
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test5_trim) {
  char s1[30] = "abc";
  char s3[] = "333";
  char *s4 = "abc";
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test6_trim) {
  char s1[30] = "hello, world!";
  char s3[] = "?!";
  char *s4 = "hello, world";
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test7_trim) {
  char *s1 = NULL;
  char *s3 = NULL;
  char *s4 = NULL;
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test8_trim) {
  char s1[30] = "";
  char s3[] = "";
  char *s4 = NULL;
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test9_trim) {
  char s1[30] = " wtf ";
  char *s3 = NULL;
  char *s4 = " wtf ";
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

START_TEST(test10_trim) {
  char s1[] = " wtf ";
  char *s3 = "";
  char *s4 = " wtf ";
  char *ptr = (char *)s21_trim(s1, s3);
  ck_assert_pstr_eq(s4, ptr);
  free(ptr);
}
END_TEST

Suite *test_trim() {
  Suite *suite = suite_create("trim");
  TCase *tcase = tcase_create("trim_tcase");

  tcase_add_test(tcase, test1_trim);
  tcase_add_test(tcase, test2_trim);
  tcase_add_test(tcase, test3_trim);
  tcase_add_test(tcase, test4_trim);
  tcase_add_test(tcase, test5_trim);
  tcase_add_test(tcase, test6_trim);
  tcase_add_test(tcase, test7_trim);
  tcase_add_test(tcase, test8_trim);
  tcase_add_test(tcase, test9_trim);
  tcase_add_test(tcase, test10_trim);

  suite_add_tcase(suite, tcase);
  return suite;
}
