#include "libmx.h"

void mx_print_unicode(wchar_t c) {
    char wc[4] = {0, 0, 0, 0};

    if (c < 0x80) {
        wc[0] = (c >> 0) & 0x7F;
    }
    else if (c < 0x800) {
        wc[0] = ((c >> 6) & 0x1F) | 0xC0;
        wc[1] = ((c >> 0) & 0x3F) | 0x80;
    }
    else if (c < 0x10000) {
        wc[0] = ((c >> 12) & 0x0F) | 0xE0;
        wc[1] = ((c >> 6) & 0x3F) | 0x80;
        wc[2] = ((c >> 0) & 0x3F) | 0x80;
    }
    else if (c < 0x110000) {
        wc[0] = ((c >> 18) & 0x7) | 0xF0;
        wc[1] = ((c >> 12) & 0x3F) | 0x80;
        wc[2] = ((c >> 6) & 0x3F) | 0x80;
        wc[3] = ((c >> 0) & 0x3F) | 0x80;
    }
    write(1, wc, 4);
}
