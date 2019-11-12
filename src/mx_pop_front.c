#include "libmx.h"

void mx_pop_front(t_list **head){
    t_list *p = NULL;

    if ((*head != NULL) && (head != NULL)) {
        p = (*head)->next;
        free(*head);
        (*head) = p;
	}
}
