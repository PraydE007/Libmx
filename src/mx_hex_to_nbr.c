#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	int len = 0;
	unsigned long base = 1;
	unsigned long result = 0;

	if (!hex)
		return 0;

	len = mx_strlen(hex);

	for (int i = len - 1; i >= 0; i--) {
		if (hex[i] >= '0' && hex[i] <= '9') {
			result += (hex[i] - 48) * base;
			base *= 16;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F') {
			result += (hex[i] - 55) * base;
			base *= 16;
		} else if (hex[i] >= 'a' && hex[i] <= 'f') {
            result += (hex[i] - 87) * base;
            base *= 16;
        }
	}
	return result;
}
