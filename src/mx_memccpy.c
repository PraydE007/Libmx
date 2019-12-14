#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned int i = 0;
	char *p1 = (char *)dst;
	char *p2 = (char *)src;

	for (i = 0; i < n; i++) {
		if (p2[i - 1] == c)
            break;
		p1[i] = p2[i];
	}
	return dst;
}
