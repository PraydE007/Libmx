#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int len) {
	int i = 0;

	while ((s1[i] || s2[i]) && i < len) {
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return 0;
}
