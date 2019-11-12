#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *new_node = mx_create_node(data);
    t_list *p = (*list);

	if (p == NULL)
        (*list) = new_node;
	else {
		while (p->next != NULL) {
			p = p->next;
		}

		p->next = new_node;
	}
}
