#include "libmx.h"

int mx_sqrt(int x) {
	int result = 0;

	for (int i = x % 2; i <= x / 2; i++) {
		if (i * i == x)
			result = i;
	}
	return result;
}
