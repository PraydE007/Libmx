#include "libmx.h"

void swap(char **el1, char** el2) {
    char* tmp = *el1;
    *el1 = *el2;
    *el2 = tmp;
}

int mx_quicksort(char** arr, int left, int right) {
    int count = 0;
    int l = left;
    int r = right;
    int p = mx_strlen(arr[(l + r) / 2]);
    
    while (l < r)
    {
        while (mx_strlen(arr[l]) < p) l++;
        while (mx_strlen(arr[r]) > p) r--;
        if (l <= r)
        {
        if (mx_strlen(arr[l]) != mx_strlen(arr[r])) {
            swap(&arr[l], &arr[r]);
            count++;
        }
        l++;
        r--;
        }
    }

    if (left < r) count += mx_quicksort(arr, left, r);
    if (l < right) count += mx_quicksort(arr, l, right);
    return count;
}
