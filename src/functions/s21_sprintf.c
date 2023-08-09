#include <stdio.h>
#include "../s21_string.h"

#define SPECS_LEN 16
#define FLAGS_LEN 16
const char specs[SPECS_LEN] = "cdieEfgGosuxXpn%";
const char flags[FLAGS_LEN] = "-+ #0";

typedef struct {
    char spec;
    int flags[5];
    int width;
    int precision;
    char len_description;
    int is_star_width;
    int is_star_precision;
} input_value;

int s21_sprintf(char *str, const char *format, ...) {
    va_list string_list;
    va_start(string_list, format);
    
    int idx = 0, read = 0;
    for (char *ch = (char *)format; *ch; idx++) {

        if (*ch == '%') {
            read = 1;
        }

        if (!read) {
            str[idx] = *ch;
            ch++;
        } else {
            char *buf = ch + 1;
            input_value data = {};


            continue;
        }



    }
    printf("%s %s", format, str);
    va_end(string_list);
    return 0;
}

void write_data(char *str, input_value *dest) {
    int flags_flag = 1, idx = 0;
    char *str_copy = str;
    while (flags_flag && str_copy) {
        flags_flag = 0;
        for (int i = 0; i < FLAGS_LEN; i++) {
            if (flags[i] == *str_copy) {
                dest->flags[i] = 1;
                flags_flag = 1;
            }
        }
        str_copy++;
    }
    int width_flag = 1;
    while (str_copy && width_flag) {
        if (*str_copy < '0' || *str_copy > '9')
            width_flag = 0;
        else {
            dest->width *= 10;
            dest->width += (*str_copy - '0');
            str_copy++;
        }
    }
    int len_decs_flag = 0;
    if (str_copy) len_decs_flag = *str_copy == '.';
    if (len_decs_flag) str_copy++;
    while (str_copy && len_decs_flag) {
        if (*str_copy < '0' || *str_copy > '9')
            len_decs_flag = 0;
        else {
            dest->len_description *= 10;
            dest->len_description += (*str_copy - '0');
            str_copy++;
        }
    }
    for (int i = 0; i < SPECS_LEN; i++) {
        if (*str_copy == specs[i]) {
            dest->spec = specs[i];
        }
    }

// * не учтены
}
