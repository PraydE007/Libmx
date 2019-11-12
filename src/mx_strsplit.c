#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    char **arr = (char **)malloc(sizeof(char **) * mx_count_words(s, c) + 1);
    int strfinded = 0;
    int wlen = 0;
    int i = 0;
    int j = 0;

    arr[mx_count_words(s, c)] = NULL;

    if (s == NULL) {
        mx_del_strarr(&arr);
        return NULL;
    }

    while (s[i] != '\0')
    {
        if (s[i] != c && !strfinded) {
            strfinded = 1;

            wlen = mx_get_subchar_index(&s[i], c);
            arr[j] = mx_strndup(&s[i], wlen);
            j++;
        }

        if (s[i] == c)
            strfinded = 0;

        i++;
    }

    return arr;
}
