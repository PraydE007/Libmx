#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    char *p = (char *)s;
    unsigned int step = 0;

    for (int i = mx_strlen(p); i > 0 && step < n; i--, step++) {
        if (p[i] == c)
            return &p[i];
    }

    return NULL;
}
