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
#include "../42Barcelona_ft_printf/include/ft_printf.h"
#include "../inc/pushswap.h"
// TODO
//  sa - swap top two in stack A.
//  sb - swap top two in stack B.
//  ss - run both above at the same time.

// For when you call the same function twice: add a null condition to the prints, send null the first one to not print and send the command string the second time.
// Exemplo in swap:
void swap(t_stack **lst, char *command)
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
    if (command != NULL)
    {
        ft_printf("s%s", command);
    }
}

//  rra - Bottom number goes to top of stack A.
//  rrb - Bottom number goes to top of stack B.
//  rrr - run both above at the same time.
void reverse(t_stack **lst, char *command)
{
    t_stack *tmp = lstlast(*lst);
    tmp->pre->next = NULL;
    (*lst)->pre = tmp;
    tmp->next = (*lst);
    tmp->pre = NULL;
    *lst = tmp;
    free(tmp);
    if (command != NULL)
    {
        ft_printf("rr%s", command);
    }
}

//  ra - Top number goes to bottom of stack A.
//  rb - Top number goes to bottom of stack B.
//  rr - run both above at the same time.
void rotate(t_stack **lst, char *command)
{
    t_stack *tmp = *lst;
    t_stack *last = lstlast(*lst);
    (*lst)->next->pre = NULL;
    (*lst) = (*lst)->next;
    last->next = tmp;
    tmp->pre = last;
    tmp->next = NULL;
    free(tmp);
    if (command != NULL)
    {
        ft_printf("r%s", command);
    }
}

//  pa - Send top of B to top of A.
//  pb - - Send top of A to top of B.

void push(t_stack **a, t_stack **b, char *command)
{
    t_stack *tmp = *a;
    (*a) = (*a)->next;
    tmp->next = NULL;
    if (b == NULL)
    {
        (*b) = tmp;
    }
    else
    {
        (*b)->pre = tmp;
        tmp->next = (*b);
    }
    free(tmp);
    if (command != NULL)
    {
        ft_printf("p%s", command);
    }
}
