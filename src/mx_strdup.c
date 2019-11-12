#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {
	char *dup = NULL;

	if (s1 == NULL)
		return NULL;

	dup = mx_strcpy(mx_strnew(mx_strlen(s1)), s1);
	return dup;
}
