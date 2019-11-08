#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *str = NULL;
    int i = 0;
    int j = 0;

    if (s1 == NULL && s2 == NULL)
        return str;

    if (s1 != NULL && s2 == NULL)
        return (char *)s1;

    if (s1 == NULL && s2 != NULL)
        return (char *)s2;

    str = mx_strnew(mx_strlen(s1) + mx_strlen(s2));

    for (j = 0, i = 0; s1[i] != '\0'; j++, i++)
        str[j] = s1[i];

    for (i = 0; s2[i] != '\0'; j++, i++)
        str[j] = s2[i];

    return str;
}
