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

void ft_handleSmall(t_stack **a, t_stack **b) {
    t_stack *first;
    t_stack *last;
    int lstLen;

    lstLen = lst_len(a);
    first = *a;
    last = lstlast(*a);
    
    if (lstLen == 2)
    {
        rotate(a, "a");
    }
    else if (lstLen == 3) {
        ft_handle3(a);
    }
    else {
        ft_handle5(a, b, lstLen);
    }
}

void ft_handle3(t_stack **lst)
{
    (void)lst;
    //t_stack *first;
    //t_stack *last;
    //int lstLen;

        // Case 1:
        // Case 2:
        // Case 3:
        // Case 4:
        // Case 5:
}


void ft_handle5(t_stack **lst_a, t_stack **lst_b, int lstLen)
{
    if (lstLen ==  4)
    {
         push(lst_a, lst_b, "b");
         ft_handle3(lst_a);
         push(lst_b, lst_a, "a");
    } else {
        push(lst_a, lst_b, "b");
        push(lst_a, lst_b, "b");
        ft_handle3(lst_a);
    }
}
