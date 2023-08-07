#include "../s21_test.h"

START_TEST(test1_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%f %f %f %f %f %f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test2_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%2f %2f %2f %2f %2f %2f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test3_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5f %.5f %.5f %.5f %.5f %.5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test4_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5f %2.5f %2.5f %2.5f %2.5f %2.5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test5_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-f %-f %-f %-f %-f %-f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test6_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2f %-2f %-2f %-2f %-2f %-2f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test7_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5f %-.5f %-.5f %-.5f %-.5f %-.5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test8_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5f %-2.5f %-2.5f %-2.5f %-2.5f %-2.5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test9_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+f %+f %+f %+f %+f %+f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test10_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2f %+2f %+2f %+2f %+2f %+2f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test11_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5f %+.5f %+.5f %+.5f %+.5f %+.5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test12_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5f %+2.5f %+2.5f %+2.5f %+2.5f %+2.5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test13_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% f % f % f % f % f % f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test14_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2f % 2f % 2f % 2f % 2f % 2f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test15_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5f % .5f % .5f % .5f % .5f % .5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test16_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5f % 2.5f % 2.5f % 2.5f % 2.5f % 2.5f";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test17_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%lf %lf %lf %lf %lf %lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test18_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%2lf %2lf %2lf %2lf %2lf %2lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test19_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5lf %.5lf %.5lf %.5lf %.5lf %.5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test20_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5lf %2.5lf %2.5lf %2.5lf %2.5lf %2.5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test21_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-lf %-lf %-lf %-lf %-lf %-lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test22_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2lf %-2lf %-2lf %-2lf %-2lf %-2lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test23_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5lf %-.5lf %-.5lf %-.5lf %-.5lf %-.5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test24_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5lf %-2.5lf %-2.5lf %-2.5lf %-2.5lf %-2.5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test25_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+lf %+lf %+lf %+lf %+lf %+lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test26_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2lf %+2lf %+2lf %+2lf %+2lf %+2lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test27_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5lf %+.5lf %+.5lf %+.5lf %+.5lf %+.5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test28_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5lf %+2.5lf %+2.5lf %+2.5lf %+2.5lf %+2.5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test29_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% lf % lf % lf % lf % lf % lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test30_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2lf % 2lf % 2lf % 2lf % 2lf % 2lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test31_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5lf % .5lf % .5lf % .5lf % .5lf % .5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test32_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5lf % 2.5lf % 2.5lf % 2.5lf % 2.5lf % 2.5lf";
  double a = 1.0, b = -1.1, c = 0;
  double d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test33_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%hf %hf %hf %hf %hf %hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test34_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%2hf %2hf %2hf %2hf %2hf %2hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test35_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%.5hf %.5hf %.5hf %.5hf %.5hf %.5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test36_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%2.5hf %2.5hf %2.5hf %2.5hf %2.5hf %2.5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test37_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-hf %-hf %-hf %-hf %-hf %-hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test38_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2hf %-2hf %-2hf %-2hf %-2hf %-2hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test39_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-.5hf %-.5hf %-.5hf %-.5hf %-.5hf %-.5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test40_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%-2.5hf %-2.5hf %-2.5hf %-2.5hf %-2.5hf %-2.5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test41_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+hf %+hf %+hf %+hf %+hf %+hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test42_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2hf %+2hf %+2hf %+2hf %+2hf %+2hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test43_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+.5hf %+.5hf %+.5hf %+.5hf %+.5hf %+.5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test44_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "%+2.5hf %+2.5hf %+2.5hf %+2.5hf %+2.5hf %+2.5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test45_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% hf % hf % hf % hf % hf % hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test46_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2hf % 2hf % 2hf % 2hf % 2hf % 2hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test47_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% .5hf % .5hf % .5hf % .5hf % .5hf % .5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

START_TEST(test48_sprintf_f) {
  char str1[100];
  char str2[100];
  char *str3 = "% 2.5hf % 2.5hf % 2.5hf % 2.5hf % 2.5hf % 2.5hf";
  float a = 1.0, b = -1.1, c = 0;
  float d = 65.12, e = -65.123, f = 255;
  ck_assert_int_eq(s21_sprintf(str1, str3, a, b, c, d, e, f),
                   sprintf(str2, str3, a, b, c, d, e, f));
  ck_assert_pstr_eq(str1, str2);
}
END_TEST

Suite *test_sprintf_f() {
  Suite *suite = suite_create("sprintf_f");
  TCase *tcase = tcase_create("sprintf_f_tcase");

  tcase_add_test(tcase, test1_sprintf_f);
  tcase_add_test(tcase, test2_sprintf_f);
  tcase_add_test(tcase, test3_sprintf_f);
  tcase_add_test(tcase, test4_sprintf_f);
  tcase_add_test(tcase, test5_sprintf_f);
  tcase_add_test(tcase, test6_sprintf_f);
  tcase_add_test(tcase, test7_sprintf_f);
  tcase_add_test(tcase, test8_sprintf_f);
  tcase_add_test(tcase, test9_sprintf_f);
  tcase_add_test(tcase, test10_sprintf_f);
  tcase_add_test(tcase, test11_sprintf_f);
  tcase_add_test(tcase, test12_sprintf_f);
  tcase_add_test(tcase, test13_sprintf_f);
  tcase_add_test(tcase, test14_sprintf_f);
  tcase_add_test(tcase, test15_sprintf_f);
  tcase_add_test(tcase, test16_sprintf_f);
  tcase_add_test(tcase, test17_sprintf_f);
  tcase_add_test(tcase, test18_sprintf_f);
  tcase_add_test(tcase, test19_sprintf_f);
  tcase_add_test(tcase, test20_sprintf_f);
  tcase_add_test(tcase, test21_sprintf_f);
  tcase_add_test(tcase, test22_sprintf_f);
  tcase_add_test(tcase, test23_sprintf_f);
  tcase_add_test(tcase, test24_sprintf_f);
  tcase_add_test(tcase, test25_sprintf_f);
  tcase_add_test(tcase, test26_sprintf_f);
  tcase_add_test(tcase, test27_sprintf_f);
  tcase_add_test(tcase, test28_sprintf_f);
  tcase_add_test(tcase, test29_sprintf_f);
  tcase_add_test(tcase, test30_sprintf_f);
  tcase_add_test(tcase, test31_sprintf_f);
  tcase_add_test(tcase, test32_sprintf_f);
  tcase_add_test(tcase, test33_sprintf_f);
  tcase_add_test(tcase, test34_sprintf_f);
  tcase_add_test(tcase, test35_sprintf_f);
  tcase_add_test(tcase, test36_sprintf_f);
  tcase_add_test(tcase, test37_sprintf_f);
  tcase_add_test(tcase, test38_sprintf_f);
  tcase_add_test(tcase, test39_sprintf_f);
  tcase_add_test(tcase, test40_sprintf_f);
  tcase_add_test(tcase, test41_sprintf_f);
  tcase_add_test(tcase, test42_sprintf_f);
  tcase_add_test(tcase, test43_sprintf_f);
  tcase_add_test(tcase, test44_sprintf_f);
  tcase_add_test(tcase, test45_sprintf_f);
  tcase_add_test(tcase, test46_sprintf_f);
  tcase_add_test(tcase, test47_sprintf_f);
  tcase_add_test(tcase, test48_sprintf_f);

  suite_add_tcase(suite, tcase);
  return suite;
}
