#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned int i = 0;
    char *p = (char *)s;

    for (i = 0; i < n; i++) {
        if (p[i] != c)
            return &p[i];
    }
    return NULL;
}
