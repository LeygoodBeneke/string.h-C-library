#include "../s21_test.h"

START_TEST(test1_s21_trim) {
  const char* src1 = "Hello World!";
  const char* str1 = "Hd";

  const char* src2 = "    123 ";
  const char* str2 = " ";

  const char* src3 = "   123 ";
  const char* str3 = "12";

  const char* src4 = "1 1 1 1 ";
  const char* str4 = "1";

  const char* src5 = "";
  const char* str5 = "";

  const char* src6 = "222111";
  const char* str6 = "12";

  const char* src7 = "\n\n333\n\n\n\n\n";
  const char* str7 = "\n";

  char* res1 = s21_trim(src1, str1);
  char* res2 = s21_trim(src2, str2);
  char* res3 = s21_trim(src3, str3);
  char* res4 = s21_trim(src4, str4);
  char* res5 = s21_trim(src5, str5);
  char* res6 = s21_trim(src6, str6);
  char* res7 = s21_trim(src7, str7);

  ck_assert_str_eq("ello World!", res1);
  ck_assert_str_eq("123", res2);
  ck_assert_str_eq("   123 ", res3);
  ck_assert_str_eq(" 1 1 1 ", res4);
  ck_assert_str_eq("", res5);
  ck_assert_str_eq("", res6);
  ck_assert_str_eq("333", res7);

  free(res1);
  free(res2);
  free(res3);
  free(res4);
  free(res5);
  free(res6);
  free(res7);
}
END_TEST
START_TEST(all_empty) {
    char str[] = "";
    char trim_ch[] = "";
    char expected[] = "";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(str_empty) {
    char str[] = "";
    char trim_ch[] = "+!0-aeoi2o3i23iuhuhh3O*YADyagsduyoaweq213";
    char expected[] = "";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_empty) {
    char str[] = "+!0-aeoi2o3i23iuhuhh3O*YADyagsduyoaweq213";
    char trim_ch[] = "";
    char expected[] = "+!0-aeoi2o3i23iuhuhh3O*YADyagsduyoaweq213";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_and_str_eq) {
    char str[] = "+!0-aeoi2o3i23iuhuhh3O*YADyagsduyoaweq213";
    char trim_ch[] = "+!0-aeoi2o3i23iuhuhh3O*YADyagsduyoaweq213";
    char expected[] = "";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_test1) {
    char str[] = "+!!++Abo+ba++00";
    char trim_ch[] = "+!0-";
    char expected[] = "Abo+ba";
    char *got = (char *)s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_test2) {
    char str[] = "Ab000cd0";
    char trim_ch[] = "003";
    char expected[] = "Ab000cd";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_test3) {
    char str[] = "DoNotTouch";
    char trim_ch[] = "Not";
    char expected[] = "DoNotTouch";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_test4) {
    char str[] = "&* !!sc21 * **";
    char trim_ch[] = "&!* ";
    char expected[] = "sc21";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_test5) {
    char str[] = " Good morning!    ";
    char trim_ch[] = " ";
    char expected[] = "Good morning!";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(empty_spaces) {
    char str[] = "        abc         ";
    char trim_ch[] = "";
    char expected[] = "abc";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(null_ptr_trim_chars) {
    char str[] = "        abc         ";
    char *trim_ch = NULL;
    char expected[] = "abc";
    char *got = s21_trim(str, trim_ch);
    ck_assert_str_eq(got, expected);
    if (got)
        free(got);
}
END_TEST

START_TEST(trim_1) {
    char *str1 = "Hello World";
    char *str2 = "H";
    char *str3 = (char *)s21_trim(str1, str2);
    ck_assert_str_eq(str3, "ello World");
    free(str3);
} END_TEST

START_TEST(trim_2) {
    char *str1 = "Hello World";
    char *str2 = "Hedl";
    char *str3 = (char *)s21_trim(str1, str2);
    ck_assert_str_eq(str3, "o Wor");
    free(str3);
} END_TEST

START_TEST(trim_3) {
    char *str1 = "";
    char *str2 = "";
    char *str3 = (char *)s21_trim(str1, str2);
    ck_assert_str_eq(str3, "");
    free(str3);
} END_TEST

START_TEST(trim_4) {
    char *str = "empty";
    char *str2 = "empty";
    char *str3 = (char *)s21_trim(str, str2);
    ck_assert_str_eq(str3, "");
    free(str3);
} END_TEST

START_TEST(trim_5) {
    char *str = NULL;
    char *str2 = NULL;
    char *str3 = (char *)s21_trim(str, str2);
    ck_assert_ptr_eq(str3, NULL);
    free(str3);
} END_TEST

START_TEST(trim_6) {
    char *str = "";
    char *str2 = NULL;
    char *str3 = (char *)s21_trim(str, str2);
    ck_assert_ptr_eq(str3, NULL);
    free(str3);
} END_TEST

START_TEST(trim_7) {
    char *str = NULL;
    char *str2 = "          ";
    char *str3 = (char *)s21_trim(str, str2);
    ck_assert_ptr_eq(str3, NULL);
    free(str3);
} END_TEST

START_TEST(trim_8) {
    char *str = "empty";
    char *str2 = "t";
    char *str3 = (char *)s21_trim(str, str2);
    ck_assert_str_ne(str3, "em");
    free(str3);
} END_TEST

Suite* test_trim() {
  Suite* suite = suite_create("s21_trim");
  TCase* tcase = tcase_create("s21_trim_tcase");

  tcase_add_test(tcase, test1_s21_trim);
  tcase_add_test(tcase, all_empty);
    tcase_add_test(tcase, str_empty);
    tcase_add_test(tcase, trim_empty);
    tcase_add_test(tcase, trim_and_str_eq);

    tcase_add_test(tcase, trim_test1);
    tcase_add_test(tcase, trim_test2);
    tcase_add_test(tcase, trim_test3);
    tcase_add_test(tcase, trim_test4);
    tcase_add_test(tcase, trim_test5);
    tcase_add_test(tcase, empty_spaces);
    tcase_add_test(tcase, null_ptr_trim_chars);

    tcase_add_test(tcase, trim_1);
    tcase_add_test(tcase, trim_2);
    tcase_add_test(tcase, trim_3);
    tcase_add_test(tcase, trim_4);
    tcase_add_test(tcase, trim_5);
    tcase_add_test(tcase, trim_6);
    tcase_add_test(tcase, trim_7);
    tcase_add_test(tcase, trim_8);

  suite_add_tcase(suite, tcase);
  return suite;
}