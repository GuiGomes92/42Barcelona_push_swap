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

void ft_handleSmall(t_stack **a, t_stack **b)
{
    int lstLen;

    lstLen = lst_len(a);

    if (lstLen == 2)
    {
        rotate(a, "a");
    }
    else if (lstLen == 3)
    {
        ft_handle3(a);
    }
    else
    {
        ft_handle5(a, b, lstLen);
    }
}

void ft_handle3(t_stack **lst)
{
    (void)lst;
    // t_stack *first;
    // t_stack *last;
    // int lstLen;

    // Case 1:
    // Case 2:
    // Case 3:
    // Case 4:
    // Case 5:
}

void ft_handle5(t_stack **lst_a, t_stack **lst_b, int lstLen)
{
    // Find the smaller number, push number to B, use logic of 3 to sort and push the B number back to stack a
    if (lstLen == 4)
    {
        t_stack *temp_a;
        temp_a = *lst_a;
        while (temp_a)
        {
            if (is_min(temp_a->index, lst_a) == 1)
            {
                // temp_a->next->pre = temp_a->pre;
                // temp_a->next = *lst_a;
                // temp_a->pre = NULL;
                printf("%i\n", temp_a->index);
                push(lst_a, lst_b, "b");
            }
            temp_a = temp_a->next;
        }
        ft_handle3(lst_a);
        push(lst_b, lst_a, "a");
    }
    else
    {
        push(lst_a, lst_b, "b");
        push(lst_a, lst_b, "b");
        ft_handle3(lst_a);
    }
}
