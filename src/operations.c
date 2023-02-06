/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:51:03 by gbraga-g          #+#    #+#             */
/*   Updated: 2023/02/01 19:51:08 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../42Barcelona_libft/libft.h"
#include "../inc/pushswap.h"
// TODO
//  sa - swap top two in stack A.
//  sb - swap top two in stack B.
//  ss - run both above at the same time.
void sa(t_stack **lst) 
{
    t_stack *tmp = *lst;
    tmp = (*lst)->next;
    (*lst)->next = (*lst)->next->next;
    (*lst)->pre = tmp;
    (*lst)->next->pre = (*lst);
    tmp->next = tmp->pre;
    tmp->pre = NULL;
    *lst = tmp;
    free(tmp);
    // if(stack == "a")
    //   write(1, 'sa', 2);
    // else if (stack == "b")
    //   write(1, 'sb', 2);
}

//  rra - Bottom number goes to top of stack A.
//  rrb - Bottom number goes to top of stack B.
//  rrr - run both above at the same time.
void rra(t_stack **lst) 
{
    t_stack *tmp = lstlast(*lst);
    tmp->pre->next = NULL;
    (*lst)->pre = tmp;
    tmp->next = (*lst);
    tmp->pre = NULL;
    *lst = tmp;

    // lstlast(tmp)->pre = NULL;
    // lstlast(tmp)->next = NULL;
    // *lst = tmp;
    // free(tmp);
    // if(stack == "a")
    //   write(1, 'rra', 2);
    // else if (stack == "b")
    //   write(1, 'rrb', 2);
}

//  ra - Top number goes to bottom of stack A.
//  rb - Top number goes to bottom of stack B.
//  rr - run both above at the same time.
//  pa - Send top of B to top of A.
//  pb - - Send top of A to top of B.
