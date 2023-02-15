/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:51:16 by gbraga-g          #+#    #+#             */
/*   Updated: 2023/02/01 19:51:19 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"
#include "../42Barcelona_ft_printf/include/libft.h"
#include "../42Barcelona_ft_printf/include/ft_printf.h"
#include <unistd.h>
#include <stdio.h>

void ft_handleSmall(t_stack **lst)
{
    int lstLen;
    // t_stack *first;
    t_stack *last;

    lstLen = lst_len(lst);
    // first = *lst;
    last = lstlast(*lst);

    if (lstLen < 3)
    {
        if (last->index == 0)
            swap(lst, "a");
    }
    else
    {
        // Case 1:
        if ((*lst)->index == 1 && is_max(lstlast(*lst)->index, lst) == 1)
        {
            swap(lst, "a");
        }

        // Case 2 :
        if (is_max((*lst)->index, lst) && is_min(lstlast(*lst)->index, lst) == 1)
        {
            swap(lst, "a");
            reverse(lst, "a");
        }

        // case 3
        if (is_max((*lst)->index, lst) == 1 && lstlast(*lst)->index == 1)
        {
            rotate(lst, "a");
        }

        // case 4
        if (is_min((*lst)->index, lst) == 1 && lstlast(*lst)->index == 1)
        {
            swap(lst, "a");
            rotate(lst, "a");
        }

        // case 5
        if ((*lst)->index == 1 && lstlast(*lst)->index == 0)
        {
            reverse(lst, "a");
        }
    }
}

void ft_handle5(t_stack **lst_a, t_stack **lst_b)
{
    push(lst_a, lst_b, "b");
    push(lst_a, lst_b, "b");
    ft_handleSmall(lst_a);
}
