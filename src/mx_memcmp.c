#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned int i = 0;
	char *p1 = (char *)s1;
	char *p2 = (char *)s2;

	while ((p1[i] || p2[i]) && i < n) {
		if (p1[i] != p2[i])
			return p1[i] - p2[i];
		i++;
	}

	return 0;
}
