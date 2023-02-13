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
#include "../42Barcelona_libft/libft.h"
#include <unistd.h>
#include <stdio.h>

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

void ft_handle5(t_stack **lst_a, t_stack **lst_b)
{
    push(lst_a, lst_b, "b");
    push(lst_a, lst_b, "b");
}
