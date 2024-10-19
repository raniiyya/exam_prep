#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int count;

    while (begin_list != 0) {
        count++;
        begin_list = begin_list->next;
    }
    return count;
}