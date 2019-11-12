#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    unsigned int i = 0;
    unsigned int j = 0;

    char *haystack = (char *)big;
    char *needle = (char *)little;

    while (haystack[i] != '\0' && i < big_len && j < little_len) {
        j = 0;

        if (haystack[i] == needle[0]) {
            while (haystack[i + j] == needle[j]
                && needle[j] != '\0')
                    j++;
            if ((unsigned int)mx_strlen(needle) == j)
                return &haystack[i];
        }
        i++;
    }

    return NULL;
}
