#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int l = 0;
	int m = 0;
	size -= 1;
	*count = 0;

	while (l <= size) {
		m = (l + size) / 2;
		(*count)++;

		if (mx_strcmp(arr[m], s) < 0) {
			l = m + 1;
		}
		else if (mx_strcmp(arr[m], s) > 0) {
			size = m - 1;
		}
		else
			return m;
	}

	*count = 0;
	return -1;
}
