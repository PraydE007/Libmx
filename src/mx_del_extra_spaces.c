#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *trim = mx_strtrim(str);
    int len = mx_clean_strlen(trim);
    char *new = mx_strnew(len);
    int i = 0;
    int j = 0;

    if (trim == NULL)
        return trim;

    while (trim[j] != '\0') {
        if (mx_isprint(trim[j])) {
            new[i] = trim[j];
            i++;
        }

        if (mx_isspace(trim[j]) && mx_isprint(trim[j - 1])) {
            new[i] = ' ';
            i++;
        }

        j++;
    }

    mx_strdel(&trim);
    return new;
}
