#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    char *new = mx_strnew(size);
    char *p = (char *)ptr;

    if (new == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
        new[i] = p[i];

    free(ptr);
    return new;
}
