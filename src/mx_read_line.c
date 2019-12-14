#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, char delim, const int fd) {
    int i = 0;
    int j = 0;
    int bytes = 0;
    wchar_t buf;
    char c;

    if (fd < 0)
        return -1;
    while (read(fd, &buf, 1) && i < buf_size) {
        if (buf != delim) {
            bytes += sizeof(buf);
            c = (char)buf;
            lineptr[j] = &c;
            j++;
        }
        i++;
    }
    return bytes;
}
