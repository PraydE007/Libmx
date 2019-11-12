#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    int i = 1;

    if (arr == NULL || arr[0] == NULL || delim == NULL)
        return;

    mx_printstr(arr[0]);

    while (arr[i] != NULL) {
        mx_printstr(delim);
        mx_printstr(arr[i]);
        i++;
    }

    mx_printchar('\n');
}
