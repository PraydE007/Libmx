#include "libmx.h"

int mx_hexstrlen(unsigned long nbr) {
    int len = 1;

    while (nbr / 16 >= 1) {
            nbr /= 16;
            len++;
    }
    return len;
}
