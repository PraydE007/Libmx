#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
	t_list *undo = NULL;
	t_list *p = NULL;

	if ((*head == NULL || head == NULL))
		return;

    if ((*head)->next == NULL) {
		free(*head);
		(*head) = NULL;
	}
	else {
		undo = (*head);
		p = (*head)->next;

		while (p->next != NULL) {
			undo = p;
			p = p->next;
		}

		free(p);
		undo->next = NULL;
	}
}
