#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char *d = (char *)dst;
    char *s = (char *)src;
    unsigned char *tmp = malloc(len);

    for(unsigned int i = 0; i < len; i++)
        tmp[i] = s[i];
    for(unsigned int i = 0; i < len; i++)
        d[i] = tmp[i];
    free(tmp);
    return d;
}
