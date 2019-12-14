#include "libmx.h"

int mx_isprint(char c) {
    if (c > 32 && c < 127)
        return 1;
    else
        return 0;
}
