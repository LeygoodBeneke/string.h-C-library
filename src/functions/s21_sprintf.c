#include <stdio.h>
#include "../s21_string.h"

#define SPECS_LEN 16
#define FLAGS_LEN 5
#define DESCRIPTION_LEN 3
const char specs[SPECS_LEN] = "cdieEfgGosuxXpn%";
const char flags[FLAGS_LEN] = "-+ #0";
const char desc[DESCRIPTION_LEN] = "hlL";

#define DUMP(varname) (#varname)

typedef struct {
    char spec;
    int flags[5];
    int width;
    int precision;
    char len_description;
    int is_star_width;
    int is_star_precision;
    int string_len;
} input_value;

void write_data(char *str, input_value *dest);
void _print_input_value(input_value tmp);
char* num_proccessing(char *string, int *value);
char *specs_check(char *string, char *value, int len, char* spec);
char *star_check(char *string, int *value);
void proccess_input_value(char **string, int *idx, input_value data, va_list *list);
int is_valid_spec(char spec);

void process_char(input_value data, char **string, int *idx, va_list *list);
void process_string(input_value data, char **string, int *idx, va_list *list);

int s21_sprintf(char *str, const char *format, ...) {
    va_list string_list;
    va_start(string_list, format);
    int idx = 0, read = 0;
    for (char *ch = (char *)format; *ch != '\0';) {
        if (*ch == '%') read = 1;

        if (read == 0) {
            printf("CHAR: %c\n", *ch);
            str[idx++] = *ch;
            ch++;
        } else {
            input_value data = {};

            printf("HAHA %s %d\n", ch + 1, read);
            write_data(ch + 1, &data);
            _print_input_value(data);
            proccess_input_value(&str, &idx, data, &string_list);
            read = 0;
            if (!data.spec) str[idx++] = '%';
            printf("HAHA %s %d\n", ch + 1, read);
            ch += data.string_len;
        }
    }
    va_end(string_list);
    str[idx] = '\0';
    return idx;
}

void write_data(char *str, input_value *dest) {
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
    }
    str_copy = star_check(str_copy, &dest->is_star_precision);
    str_copy = specs_check(str_copy, &dest->len_description, DESCRIPTION_LEN, (char *)desc);
    str_copy = specs_check(str_copy, &dest->spec, SPECS_LEN, (char *)specs);
    if (str && str_copy) dest->string_len = str_copy - str + 1;
    if (!dest->spec) dest->string_len = 1;
}

char* num_proccessing(char *string, int *value) {
    while (string && (*string >= '0' && *string <= '9')) {
        *value = *value * 10 + (*string - '0');
        string++;
    }
    return string;
}

char *specs_check(char *string, char *value, int len, char* spec) {
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

void proccess_input_value(char **string, int *idx, input_value data, va_list *list) {
    if (is_valid_spec(data.spec) == 0) {
        printf("ERROR");
    }
    if (data.is_star_width) {
        data.width = va_arg(*list, int);
    }
    if (data.is_star_precision) {
        data.precision = va_arg(*list, int);
    }



    if (data.spec == 'c') {
        process_char(data, string, idx, list);
    }

    if (data.spec == '%') {
       (*string)[(*idx)++] = '%';
    }

    if (data.spec == 'd') {
        long num = va_arg(*list, long);
        int is_negative = num < 0;
        if (is_negative) num *= -1;
        int num_copy = num, len = is_negative;
        while (num_copy != 0) {
            num_copy /= 10;
            len++;
        }
        int len_copy = len;
        data.width -= len;
        char num_string[len];
        while (num) {
            len--;
            num_string[len] = '0' + (num % 10);
            num /= 10;
        }
        if (is_negative) num_string[0] = '-';

        if (data.flags[0]) {
            for (int i = 0; i < len_copy; i++) {
               (*string)[(*idx)++] = num_string[i];
            }
        }
        if (data.flags[1] && num_string[0] != '-')
            (*string)[(*idx)++] = '+';

        for (int i = 0; i < data.width; i++) {
            (*string)[(*idx)++] = ' ';
        }

        if (!data.flags[0]) {
            for (int i = 0; i < len_copy; i++) {
               (*string)[(*idx)++] = num_string[i];
            }
        }
    }

    if (data.spec == 's') {
        process_string(data, string, idx, list);
    }


}

int is_valid_spec(char spec) {
    int flag = 0;
    for (int i = 0; i < SPECS_LEN; i++)
        if (spec == specs[i]) {
            flag = 1;
            break;
        }
    return flag;
}

void process_char(input_value data, char **string, int *idx, va_list *list) {
    data.width--;
   if (data.flags[0]) (*string)[(*idx)++] = va_arg(*list, int);
   for (int i = 0; i < data.width; i++) {
       (*string)[(*idx)++] = ' ';
   }
   if (!data.flags[0]) (*string)[(*idx)++] = va_arg(*list, int);
}

void process_string(input_value data, char **string, int *idx, va_list *list) {
    char *str = va_arg(*list, char*);
    data.width -= s21_strlen(str);
    for (unsigned int i = 0; i < s21_strlen(str); i++) {
       (*string)[(*idx)++] = str[i];
    }
}

void _print_input_value(input_value tmp) {
    fprintf(stderr, "%s = %c\n", DUMP(tmp.spec), tmp.spec);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.width), tmp.width);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.precision), tmp.precision);
    fprintf(stderr, "%s = %c\n", DUMP(tmp.len_description), tmp.len_description);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.is_star_width), tmp.is_star_width);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.is_star_precision), tmp.is_star_precision);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.string_len), tmp.string_len);
}
