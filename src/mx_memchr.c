#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned int i = 0;
    char *p = (char *)s;

    while (p[i] != '\0' && p[i] != c && i < n) {
        if (p[i] != c)
            return &p[i];
        i++;
    }

    return NULL;
}
