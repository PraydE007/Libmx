#include "../inc/libmx.h"

int mx_clean_strlen(const char *trim) {
    int len = 0;
    int i = 0;

    while (trim[i] != '\0') {
        if (mx_isprint(trim[i])) {
            len++;
            i++;
        }
        if (mx_isspace(trim[i])) {
            len++;

            while (mx_isspace(trim[i]))
                i++;
        }
    }

    return len;
}
