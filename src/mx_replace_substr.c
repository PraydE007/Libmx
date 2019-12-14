#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *new = NULL;
    int i = 0;
    int j = 0;
    int len = 0;
    int slen = 0;
    int rlen = 0;

    if (str == NULL || sub == NULL || replace == NULL)
        return NULL;
    slen = mx_strlen(sub);
    rlen = mx_strlen(replace);
    len = mx_replace_strlen(str, sub, replace);
    new = mx_strnew(len);
    while (str[i] != '\0') {
        if (str[i] == sub[0]) {
            if (mx_strncmp(&str[i], sub, slen) == 0) {
                for (int x = 0; x < rlen; x++, j++)
                    new[j] = replace[x];
                i += slen;
            }
            else {
                new[j] = str[i];
                i++;
                j++;
            }
        }
        else {
            new[j] = str[i];
            i++;
            j++;
        }
    }
    return new;
}
