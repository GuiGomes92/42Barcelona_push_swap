#include "../inc/pushswap.h"
#include "../42Barcelona_libft/libft.h"
#include <unistd.h>
#include <stdio.h>

void ft_handle3(t_stack **lst)
{
    t_stack *tmp = *lst;
    if (tmp->index == 1 && tmp->next->index == 0)
    {
        tmp->next = tmp;
        tmp = (*lst)->next;
        lst = &tmp;
    }
}