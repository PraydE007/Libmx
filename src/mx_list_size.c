#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    t_list *p = list;
	int len = 0;

	while (p != NULL) {
		len++;
		p = p->next;
	}

	return len;
}
