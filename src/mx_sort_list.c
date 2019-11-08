#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    if (lst == 0 ) return 0;
    t_list * tmp1 = lst;
    t_list * tmp2 = lst->next;
    int count = mx_list_size(lst);
    for(int i = 0; i < count; i++)
    {
        while (tmp2) {
            if (cmp(tmp1->data, tmp2->data) == true) {
                void* tmp;
                tmp = tmp1->data;
                tmp1->data = tmp2->data;
                tmp2->data = tmp;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        tmp1 = lst;
        tmp2 = lst->next;
    }
    return lst;
}
