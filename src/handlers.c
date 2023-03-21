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
    // Case 1:
    if ((*lst)->index == 1 && lstlast(*lst)->index == 2)
    {
        swap(lst, "a");
    }

    // Case 2 :
    if ((*lst)->index == 2 && lstlast(*lst)->index == 0)
    {
        swap(lst, "a");
        // printf("Hello");
        reverse(lst, "a");
    }

    // case 3
    if ((*lst)->index == 2 && lstlast(*lst)->index == 1)
    {
        rotate(lst, "a");
    }

    // case 4
    if ((*lst)->index == 0 && lstlast(*lst)->index == 1)
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

void ft_handle5(t_stack **lst_a, t_stack **lst_b, int lstLen)
{
    // Find the smaller number, push number to B, use logic of 3 to sort and push the B number back to stack a
    if (lstLen == 4)
    {
        t_stack *temp;
        temp = *lst_a;
        while (temp)
        {
            if (is_min(temp->index, lst_a) == 1)
            {
                (*lst_a)->next = temp->next;
                (*lst_a)->next->pre = (*lst_a);
                (*lst_a)->pre = temp;
                temp->next = (*lst_a);
                temp->pre = NULL;
                (*lst_a) = temp;
                push(lst_a, lst_b, "b");
                break;
            }
            temp = temp->next;
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
