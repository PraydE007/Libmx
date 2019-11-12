#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    char *new = NULL;
    int l = 0;
    int r = mx_strlen(str);

    if (str == NULL)
        return new;
    
    while (mx_isspace(str[r - 1]))
        r--;

    while (mx_isspace(str[l]))
        l++;

    new = mx_strnew(r - l);

    if (new == NULL)
        return new;

    return new = mx_strncpy(new, str + l, r - l);
}
