#include "../inc/libmx.h"

int mx_replace_strlen(const char *str, const char *sub, const char *replace) {
    int i = 0;
    int len = 0;
    int slen = 0;
    int rlen = 0;

    slen = mx_strlen(sub);
    rlen = mx_strlen(replace);

    while (str[i] != '\0') {
        if (str[i] == sub[0]) {
            if (mx_strncmp(&str[i], sub, slen) == 0) {
                i += slen;
                len += rlen;
            }
            else
                i++;
        }
        else {
            len++;
            i++;
        }
    }

    return len;
}
