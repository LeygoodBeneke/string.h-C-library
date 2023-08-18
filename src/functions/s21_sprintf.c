#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#include "../s21_string.h"

#define SPECS_LEN 16
#define FLAGS_LEN 5
#define DESCRIPTION_LEN 3

typedef struct {
  char spec;
  int flags[5];
  int width;
  int precision;
  char len_description;
  int is_star_width;
  int is_star_precision;
  int string_len;
  int _is_precision;
} input_value;

typedef struct {
  void (*functions[SPECS_LEN - 1])(input_value, char **, int *, va_list *);
} funcs_processing;

void write_data(char *str, input_value *dest);
char *num_proccessing(char *string, int *value);
char *specs_check(char *string, char *value, int len, char *spec);
char *star_check(char *string, int *value);
void proccess_input_value(char **string, int *idx, input_value data,
                          va_list *list);
int is_valid_spec(char spec);
void init_call_back(funcs_processing *fp);
void print_symbols(char **string, int *idx, int len, char symbol);
int get_num_len(unsigned long num, int base);
void num_to_string(char *string, int len, unsigned long num, int base,
                   char spec);

void process_c(input_value data, char **string, int *idx, va_list *list);
void process_s(input_value data, char **string, int *idx, va_list *list);
void process_d(input_value data, char **string, int *idx, va_list *list);
void process_i(input_value data, char **string, int *idx, va_list *list);
void process_u(input_value data, char **string, int *idx, va_list *list);
void process_e(input_value data, char **string, int *idx, va_list *list);
void process_f(input_value data, char **string, int *idx, va_list *list);
void process_g(input_value data, char **string, int *idx, va_list *list);
void process_o(input_value data, char **string, int *idx, va_list *list);
void process_x(input_value data, char **string, int *idx, va_list *list);
void process_p(input_value data, char **string, int *idx, va_list *list);
void process_n(input_value data, char **string, int *idx, va_list *list);
void process_t(input_value data, char **string, int *idx, va_list *list);

int s21_sprintf(char *str, const char *format, ...) {
  setlocale(LC_ALL, "en_US.UTF-16");
  va_list string_list;
  va_start(string_list, format);
  int idx = 0, read = 0;
  for (char *ch = (char *)format; *ch != '\0';) {
    if (*ch == '%') read = 1;

    if (read == 0) {
      str[idx++] = *ch;
      ch++;
    } else {
      input_value data = {};
      write_data(ch + 1, &data);
      proccess_input_value(&str, &idx, data, &string_list);
      read = 0;
      if (!data.spec) str[idx++] = '%';
      ch += data.string_len;
    }
  }
  va_end(string_list);
  str[idx] = '\0';
  return idx;
}

void write_data(char *str, input_value *dest) {
  const char flags[FLAGS_LEN] = "-+ #0";
  const char desc[DESCRIPTION_LEN] = "hlL";
  int flags_flag = 1;
  char *str_copy = str;
  while (flags_flag && str_copy) {
    flags_flag = 0;
    for (int i = 0; i < FLAGS_LEN; i++) {
      if (flags[i] == *str_copy) {
        dest->flags[i] = 1;
        flags_flag = 1;
      }
    }
    if (flags_flag) str_copy++;
  }
  str_copy = num_proccessing(str_copy, &dest->width);
  str_copy = star_check(str_copy, &dest->is_star_width);
  if (str_copy && *str_copy == '.') {
    str_copy++;
    str_copy = num_proccessing(str_copy, &dest->precision);
    dest->_is_precision = 1;
  }
  str_copy = star_check(str_copy, &dest->is_star_precision);
  str_copy = specs_check(str_copy, &dest->len_description, DESCRIPTION_LEN,
                         (char *)desc);
  if (dest->len_description == 'l')
    str_copy = specs_check(str_copy, &dest->len_description, DESCRIPTION_LEN,
                           (char *)desc);
  char specs[SPECS_LEN] = "csdiueEfgGoxXpn%";
  str_copy = specs_check(str_copy, &dest->spec, SPECS_LEN, (char *)specs);
  if (str && str_copy) dest->string_len = str_copy - str + 1;
  if (!dest->spec) dest->string_len = 1;
}

char *num_proccessing(char *string, int *value) {
  while (string && (*string >= '0' && *string <= '9')) {
    *value = *value * 10 + (*string - '0');
    string++;
  }
  return string;
}

char *specs_check(char *string, char *value, int len, char *spec) {
  for (int i = 0; string && i < len; i++) {
    if (*string == spec[i]) {
      *value = spec[i];
      string++;
      break;
    }
  }
  return string;
}

char *star_check(char *string, int *value) {
  if (string && *string == '*') {
    *value = 1;
    string++;
  }
  return string;
}

void init_call_back(funcs_processing *fp) {
  fp->functions[0] = &process_c;
  fp->functions[1] = &process_s;
  fp->functions[2] = &process_d;
  fp->functions[3] = &process_i;
  fp->functions[4] = &process_u;
  fp->functions[5] = &process_e;
  fp->functions[6] = &process_e;
  fp->functions[7] = &process_f;
  fp->functions[8] = &process_g;
  fp->functions[9] = &process_g;
  fp->functions[10] = &process_o;
  fp->functions[11] = &process_x;
  fp->functions[12] = &process_x;
  fp->functions[13] = &process_p;
  fp->functions[14] = &process_n;
}

void proccess_input_value(char **string, int *idx, input_value data,
                          va_list *list) {
  const char specs[SPECS_LEN] = "csdiueEfgGoxXpn%";
  funcs_processing fp;
  init_call_back(&fp);

  if (data.is_star_width) data.width = va_arg(*list, int);

  if (data.is_star_precision) data.precision = va_arg(*list, int);

  for (int i = 0; i < SPECS_LEN - 1; i++)
    if (data.spec == specs[i]) fp.functions[i](data, string, idx, list);

  if (data.spec == '%') {
    (*string)[(*idx)++] = '%';
  }
}

int is_valid_spec(char spec) {
  int flag = 0;
  const char specs[SPECS_LEN] = "csdiueEfgGoxXpn%";
  for (int i = 0; i < SPECS_LEN; i++)
    if (spec == specs[i]) {
      flag = 1;
      break;
    }
  return flag;
}

void process_c(input_value data, char **string, int *idx, va_list *list) {
  data.width--;
  int c = 0;
  wchar_t long_char = 0;

  if (data.len_description == 'l')
    long_char = va_arg(*list, wchar_t);
  else
    c = va_arg(*list, int);
  if (!data.flags[0]) print_symbols(string, idx, data.width, ' ');

  if (data.len_description == 'l') c = wctob(long_char);
  (*string)[(*idx)++] = c;
  if (data.flags[0]) print_symbols(string, idx, data.width, ' ');
}

void process_s(input_value data, char **string, int *idx, va_list *list) {
  char *str = S21_NULL;
  wchar_t *wstr = S21_NULL;
  int len;
  if (data.len_description != 'l') {
    str = va_arg(*list, char *);
    len = s21_strlen(str);
  } else {
    wstr = va_arg(*list, wchar_t *);
    int bytes = sizeof(wstr[0]);
    len = wcslen(wstr);
    str = malloc(len * bytes);
    wcstombs(str, wstr, len * bytes);
  }
  if (data._is_precision)
    if (data.precision < len) len = data.precision;
  data.width -= len;
  if (!data.flags[0]) print_symbols(string, idx, data.width, ' ');
  for (int i = 0; i < len; i++) {
    if (str[i] >= 0) (*string)[(*idx)++] = str[i];
  }

  if (data.flags[0]) print_symbols(string, idx, data.width, ' ');
  if (data.len_description == 'l') free(str);
}

void process_d(input_value data, char **string, int *idx, va_list *list) {
  unsigned long int num = 0;

  if (data.len_description == 'h') {
    if (data.spec == 'u')
      num = (unsigned short int)va_arg(*list, unsigned int);
    else
      num = (short int)va_arg(*list, int);
  } else if (data.len_description != 'l') {
    if (data.spec == 'u')
      num = (unsigned int)va_arg(*list, unsigned int);
    else
      num = va_arg(*list, int);
  } else {
    if (data.spec == 'u')
      num = va_arg(*list, unsigned long int);
    else
      num = (long int)va_arg(*list, long int);
  }

  if (data.spec == 'u') {
    data.flags[1] = 0;
    data.flags[2] = 0;
  }

  char first_char = 0;
  int is_negative = (long)num < 0 && data.spec == 'd';
  if (is_negative) {
    num *= -1;
    first_char = '-';
  } else if (data.flags[1])
    first_char = '+';
  else if (data.flags[2])
    first_char = ' ';
  int is_first = first_char != 0;

  unsigned long num_copy = num;
  int len = get_num_len(num_copy, 10);
  len = data.precision > len ? data.precision : len;
  char string_abs[len];
  num_to_string(string_abs, len, num, 10, data.spec);

  if (data.flags[0]) {
    if (is_first) {
      (*string)[(*idx)++] = first_char;
    }
    for (int i = 0; i < len; i++) {
      (*string)[(*idx)++] = string_abs[i];
    }
    int add_len = data.width - len - is_first;
    print_symbols(string, idx, add_len, ' ');
  } else {
    if (data.flags[4]) {
      if (is_first) {
        (*string)[(*idx)++] = first_char;
      }
      int add_len = data.width - len - is_first;
      print_symbols(string, idx, add_len, '0');
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    } else {
      int add_len = data.width - len - is_first;
      print_symbols(string, idx, add_len, ' ');
      if (is_first) {
        (*string)[(*idx)++] = first_char;
      }
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    }
  }
}

void process_i(input_value data, char **string, int *idx, va_list *list) {
  data.spec = 'd';
  process_d(data, string, idx, list);
}

void process_u(input_value data, char **string, int *idx, va_list *list) {
  process_d(data, string, idx, list);
}

void process_e(input_value data, char **string, int *idx, va_list *list) {
  long double num;
  if (data.len_description == 'L' || data.len_description == 'l')
    num = va_arg(*list, long double);
  else
    num = va_arg(*list, double);

  if (!data._is_precision) data.precision = 6;

  char first_char = 0;
  int is_negative = (long)num < 0;
  if (is_negative) {
    num *= -1;
    first_char = '-';
  } else if (data.flags[1])
    first_char = '+';
  else if (data.flags[2])
    first_char = ' ';
  int is_first = first_char != 0, exp = 0;
  if (num != 0.0) {
    while (num < 1.0) {
      exp--;
      num *= 10.0;
    }
    while (num >= 10.0) {
      exp++;
      num /= 10.0;
    }
  }

  char string_fract[data.precision];
  long double n1 = num - (long)num, n2 = 1;
  for (int i = 0; i < data.precision; i++) {
    n1 *= 10.0;
    long a = n1;
    n1 -= a;
    n2 /= 10;
  }
  if (n1 >= 0.5) num += n2;
  unsigned long num_copy = (long int)num;
  num -= (long)num;
  int len = get_num_len(num_copy, 10);
  char string_dec[len];
  num_to_string(string_dec, len, num_copy, 10, data.spec);
  for (int i = 0; i < data.precision; i++) {
    num *= 10.0;
    long a = num;
    string_fract[i] = a % 10 + '0';
    num -= a;
  }
  int dot = data.precision != 0;
  char sign = '+';
  if (exp < 0) {
    exp *= -1;
    sign = '-';
  }
  int exp_len = get_num_len(exp, 10);
  if (exp_len < 2) exp_len++;

  char string_abs[len + data.precision + dot + 2 + exp_len];

  for (int i = 0; i < len; i++) {
    string_abs[i] = string_dec[i];
  }
  if (dot) string_abs[len] = '.';
  for (int i = 0; i < data.precision; i++) {
    string_abs[i + len + 1] = string_fract[i];
  }
  len = len + data.precision + dot + 2 + exp_len;

  string_abs[len - exp_len - 2] = data.spec == 'e' ? 'e' : 'E';
  string_abs[len - exp_len - 1] = sign;
  for (int i = 0; i < exp_len; i++) {
    string_abs[len - 1 - i] = '0' + exp % 10;
    exp /= 10;
  }

  if (data.flags[0]) {
    if (is_first) {
      (*string)[(*idx)++] = first_char;
    }
    for (int i = 0; i < len; i++) {
      (*string)[(*idx)++] = string_abs[i];
    }
    int add_len = data.width - len - is_first;
    print_symbols(string, idx, add_len, ' ');
  } else {
    if (data.flags[4]) {
      if (is_first) {
        (*string)[(*idx)++] = first_char;
      }
      int add_len = data.width - len - is_first;
      print_symbols(string, idx, add_len, '0');
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    } else {
      int add_len = data.width - len - is_first;
      print_symbols(string, idx, add_len, ' ');
      if (is_first) {
        (*string)[(*idx)++] = first_char;
      }
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    }
  }
}

void process_f(input_value data, char **string, int *idx, va_list *list) {
  long double num;
  if (data.len_description == 'L')
    num = va_arg(*list, long double);
  else
    num = va_arg(*list, double);

  if (!data._is_precision) data.precision = 6;

  char first_char = 0;
  int is_negative = num < 0.0;
  if (is_negative) {
    num *= -1;
    first_char = '-';
  } else if (data.flags[1])
    first_char = '+';
  else if (data.flags[2])
    first_char = ' ';
  int is_first = first_char != 0;

  char string_fract[data.precision];
  long double n1 = num - (long)num, n2 = 1;
  long a;
  for (int i = 0; i < data.precision; i++) {
    n1 *= 10.0;
    a = n1;
    n1 -= a;
    n2 /= 10;
  }
  if (n1 >= 0.5) num += n2;
  unsigned long num_copy = (long int)num;
  num -= (long)num;
  int len = get_num_len(num_copy, 10);
  char string_dec[len];
  num_to_string(string_dec, len, num_copy, 10, data.spec);
  for (int i = 0; i < data.precision; i++) {
    num *= 10.0;
    long a = num;
    string_fract[i] = a % 10 + '0';
    num -= a;
  }
  int dot = data.precision != 0;

  char string_abs[len + data.precision + dot];

  for (int i = 0; i < len; i++) {
    string_abs[i] = string_dec[i];
  }
  if (dot) string_abs[len] = '.';
  for (int i = 0; i < data.precision; i++) {
    string_abs[i + len + 1] = string_fract[i];
  }
  len = len + data.precision + dot;

  if (data.flags[0]) {
    if (is_first) {
      (*string)[(*idx)++] = first_char;
    }
    for (int i = 0; i < len; i++) {
      (*string)[(*idx)++] = string_abs[i];
    }
    int add_len = data.width - len - is_first;
    print_symbols(string, idx, add_len, ' ');
  } else {
    if (data.flags[4]) {
      if (is_first) {
        (*string)[(*idx)++] = first_char;
      }
      int add_len = data.width - len - is_first;
      print_symbols(string, idx, add_len, '0');
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    } else {
      int add_len = data.width - len - is_first;
      print_symbols(string, idx, add_len, ' ');
      if (is_first) {
        (*string)[(*idx)++] = first_char;
      }
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    }
  }
}

void process_g(input_value data, char **string, int *idx, va_list *list) {
  char *first = malloc(1000 * sizeof(char)),
       *second = malloc(1000 * sizeof(char));
  int fidx = 0, sidx = 0;
  va_list *f = list, *s = list;
  data.spec = 'f';
  data._is_precision = 0;
  process_f(data, &first, &fidx, f);
  data.spec = 'e';
  process_e(data, &second, &sidx, s);

  if (fidx < sidx) {
    for (int i = 0; i < fidx; i++) {
      (*string)[(*idx)++] = first[i];
    }
  } else {
    for (int i = 0; i < sidx; i++) {
      (*string)[(*idx)++] = second[i];
    }
  }
  free(first);
  free(second);
}

void process_o(input_value data, char **string, int *idx, va_list *list) {
  unsigned long int num = 0;

  if (data.len_description == 'h') {
    num = (unsigned short int)va_arg(*list, int);
  } else if (data.len_description != 'l') {
    num = (unsigned int)va_arg(*list, unsigned int);
  } else {
    num = (unsigned long int)va_arg(*list, long int);
  }

  char first_char = 0;

  unsigned long num_copy = num;
  int len = get_num_len(num_copy, 8);
  if (data.flags[3] && num) len++;
  len = data.precision > len ? data.precision : len;
  char string_abs[len];
  num_to_string(string_abs, len, num, 8, data.spec);
  int is_first = first_char != 0;

  if (data.flags[0]) {
    for (int i = 0; i < len; i++) {
      (*string)[(*idx)++] = string_abs[i];
    }
    int add_len = data.width - len - is_first;
    print_symbols(string, idx, add_len, ' ');
  } else {
    if (data.flags[4]) {
      int add_len = data.width - len;
      print_symbols(string, idx, add_len, '0');
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    } else {
      int add_len = data.width - len;
      print_symbols(string, idx, add_len, ' ');
      if (is_first) {
        (*string)[(*idx)++] = first_char;
      }
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    }
  }
}

void process_x(input_value data, char **string, int *idx, va_list *list) {
  unsigned long int num = 0;

  if (data.len_description == 'h') {
    num = (unsigned short int)va_arg(*list, int);
  } else if (data.len_description != 'l') {
    num = (unsigned int)va_arg(*list, unsigned int);
  } else {
    num = (unsigned long int)va_arg(*list, long int);
  }

  unsigned long num_copy = num, is_x = num != 0 && data.flags[3];
  int len = get_num_len(num_copy, 16);
  len = data.precision > len ? data.precision : len;
  char string_abs[len];
  num_to_string(string_abs, len, num, 16, data.spec);

  if (data.flags[0]) {
    if (is_x) {
      (*string)[(*idx)++] = '0';
      (*string)[(*idx)++] = data.spec;
    }
    for (int i = 0; i < len; i++) {
      (*string)[(*idx)++] = string_abs[i];
    }
    int add_len = data.width - len - is_x * 2;
    print_symbols(string, idx, add_len, ' ');
  } else {
    if (data.flags[4]) {
      if (is_x) {
        (*string)[(*idx)++] = '0';
        (*string)[(*idx)++] = data.spec;
      }
      int add_len = data.width - len - is_x * 2;
      print_symbols(string, idx, add_len, '0');
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    } else {
      int add_len = data.width - len - is_x * 2;
      print_symbols(string, idx, add_len, ' ');
      if (is_x) {
        (*string)[(*idx)++] = '0';
        (*string)[(*idx)++] = data.spec;
      }
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    }
  }
}

void process_p(input_value data, char **string, int *idx, va_list *list) {
  unsigned long int num = 0;
  int *pointer = va_arg(*list, int *);
  num = (long)pointer;

  unsigned long num_copy = num, is_x = num != 0 && data.flags[3];
  int len = get_num_len(num_copy, 16);
  len = data.precision > len ? data.precision : len;
  if (pointer == S21_NULL) {
    len = 5;
  }
  char string_abs[len];
  int first = 0;
  num_to_string(string_abs, len, num, 16, data.spec);
  if (data.flags[1] || data.flags[2]) first = 1;

  if (pointer == S21_NULL) {
    char *st = "(nil)";
    first = 0;
    for (int i = 0; i < 5; i++) string_abs[i] = st[i];
  } else
    is_x = 1;

  if (data.flags[0]) {
    if (pointer != S21_NULL) {
      if (data.flags[1])
        (*string)[(*idx)++] = '+';
      else if (data.flags[2])
        (*string)[(*idx)++] = ' ';

      (*string)[(*idx)++] = '0';
      (*string)[(*idx)++] = 'x';
    }
    for (int i = 0; i < len; i++) {
      (*string)[(*idx)++] = string_abs[i];
    }
    int add_len = data.width - len - is_x * 2 - first;
    print_symbols(string, idx, add_len, ' ');
  } else {
    if (data.flags[4]) {
      if (pointer != S21_NULL) {
        if (data.flags[1])
          (*string)[(*idx)++] = '+';
        else if (data.flags[2])
          (*string)[(*idx)++] = ' ';
        (*string)[(*idx)++] = '0';
        (*string)[(*idx)++] = 'x';
      }
      int add_len = data.width - len - is_x * 2 - first;
      print_symbols(string, idx, add_len, '0');
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    } else {
      int add_len = data.width - len - is_x * 2 - first;
      print_symbols(string, idx, add_len, ' ');
      if (pointer != S21_NULL) {
        if (data.flags[1])
          (*string)[(*idx)++] = '+';
        else if (data.flags[2])
          (*string)[(*idx)++] = ' ';
        (*string)[(*idx)++] = '0';
        (*string)[(*idx)++] = 'x';
      }
      for (int i = 0; i < len; i++) {
        (*string)[(*idx)++] = string_abs[i];
      }
    }
  }
}

void process_n(input_value data, char **string, int *idx, va_list *list) {
  int *ptr = va_arg(*list, int *);
  *ptr = *idx;
  data.len_description++;
  (*string)[(*idx)] = (*string)[(*idx)];
}

void print_symbols(char **string, int *idx, int len, char symbol) {
  for (int i = 0; i < len; i++) (*string)[(*idx)++] = symbol;
}

int get_num_len(unsigned long num, int base) {
  int len = num == 0;
  while (num) {
    len++;
    num /= base;
  }
  return len;
}

void num_to_string(char *string, int len, unsigned long num, int base,
                   char spec) {
  char alpha = spec == 'X' ? 'A' : 'a';
  for (int i = len - 1; i >= 0; i--) {
    if (num % base < 10)
      string[i] = '0' + (num % base);
    else
      string[i] = alpha + (num % base - 10);
    num /= base;
  }
}
