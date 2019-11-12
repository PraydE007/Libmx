#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int i = 0;
    int j = 0;

    while (haystack[i] != '\0') {
        j = 0;

        if (haystack[i] == needle[0]) {
            while (haystack[i + j] == needle[j]
                && needle[j] != '\0')
                    j++;
            if (mx_strlen(needle) == j)
                return (char *)&haystack[i];
        }
        i++;
    }

    return NULL;
}
