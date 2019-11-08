#include "libmx.h"

int mx_get_subchar_index(const char *str, const char sub) {
    int i = 0;

    if (str == NULL)
        return -2;

    while (str[i] != '\0') {
        if (str[i] == sub)
            return i;
        i++;
    }

    return -1;
}
