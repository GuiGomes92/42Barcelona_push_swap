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

void ft_handle3(t_stack **lst)
{
    t_stack *first;
    t_stack *last;

    first = *lst;
    last = lstlast(*lst);

    // Case 1:
    if (first->index == 1 && is_max(last->index, lst) == 1)
    {
        swap(lst, "a");
    }

    // Case 2 :
    if (is_max(first->index, lst) && is_min(last->index, lst) == 1)
    {
        swap(lst, "a");
        reverse(lst, "a");
    }

    // case 3
    if (is_max(first->index, lst) == 1 && last->index == 1)
    {
        rotate(lst, "a");
    }

    // case 4
    if (is_min(first->index, lst) == 1 && last->index == 1)
    {
        swap(lst, "a");
        rotate(lst, "a");
    }

    // case 5
    if (first->index == 1 && last->index == 0)
    {
        reverse(lst, "a");
    }
}

void ft_handle5(t_stack **lst_a, t_stack **lst_b)
{
    push(lst_a, lst_b, "b");
    push(lst_a, lst_b, "b");
    ft_handle3(lst_a);
}
