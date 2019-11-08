#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	char *dup = mx_strnew(n);
	dup = mx_strncpy(dup, s1, n);
	return dup;
}
