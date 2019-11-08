#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
	char *temp;
	int count = 0;

	for (int y = 0; y < size - 1; y++) {
		for (int x = 0; x < size - y - 1; x++) {
			if (mx_strcmp(arr[x], arr[x + 1]) > 0) {
				temp = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = temp;
				count++;
			}
		}
	}

	return count;
}
