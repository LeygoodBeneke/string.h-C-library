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

int s21_sprintf(char *str, const char *format, ...) {
    va_list string_list;
    va_start(string_list, format);
    
    int idx = 0, read = 0;
    for (char *ch = (char *)format; *ch;) {

        if (*ch == '%') {
            read = 1;
        }

        if (!read) {
            printf("CHAR: %c\n", *ch);
            str[idx++] = *ch;
            ch++;
        } else {
            char *buf = ch + 1;
            input_value data = {};

            printf("BEFORE: %s\n", buf);

            write_data(buf, &data);
            _print_input_value(data);

            ch += data.string_len;
            printf("AFTER: %s\n", ch);
            read = 0;
        }



    }
    //printf("%s %s", format, str);
    va_end(string_list);
    return 0;
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
    dest->string_len = str_copy - str + 2;
    str = str_copy;
}

char* num_proccessing(char *string, int *value) {
    int flag = 1;
    while (string && flag) {
        if (*string < '0' || *string > '9')
            flag = 0;
        else {
            *value *= 10;
            *value += (*string - '0');
            string++;
        }
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


void _print_input_value(input_value tmp) {
    fprintf(stderr, "%s = %c\n", DUMP(tmp.spec), tmp.spec);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.width), tmp.width);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.precision), tmp.precision);
    fprintf(stderr, "%s = %c\n", DUMP(tmp.len_description), tmp.len_description);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.is_star_width), tmp.is_star_width);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.is_star_precision), tmp.is_star_precision);
    fprintf(stderr, "%s = %d\n", DUMP(tmp.string_len), tmp.string_len);
}
