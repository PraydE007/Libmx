#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int i = 0;
    int j = 0;
    int count = 0;

    if (str == NULL || sub == NULL)
        return -1;

    while (str[i] != '\0') {
        j = 0;

        if (str[i] == sub[0]) {
            while (str[i + j] == sub[j] && sub[j] != '\0') {
                j++;
                if (mx_strlen(sub) == j)
                    count++;
            }
        }

        i++;
    }

    return count;
}
