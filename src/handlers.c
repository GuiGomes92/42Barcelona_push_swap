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
    t_stack *tmp = *lst;
    tmp = (*lst)->next;
    printf("\n\nstep 1: %d \n", tmp->content); // 1
    printf("next: %d \n\n", tmp->next->content);
    printf("pre: %d \n", tmp->pre->content);

    (*lst)->next = (*lst)->next->next;
    printf("step 2: %d \n", (*lst)->next->content); // 3

    (*lst)->pre = tmp;
    printf("step 3: %d \n", (*lst)->pre->content); // 1

    (*lst)->next->pre = (*lst);
    printf("step 4: %d \n", (*lst)->next->pre->content); // 2

    tmp->next = tmp->pre;
    printf("step 5: %d \n", tmp->content); // 1

    tmp->pre = NULL;

    *lst = tmp;
    printf("step 6: %d \n", (*lst)->content); // 1

    // printf("%d, ", (*lst)->content);       // 1
    // printf("%d, ", (*lst)->next->content); // 1
    // printf("%d, ", (*lst)->next->next->content); // 1

    // if (tmp->index == 1 && tmp->next->index == 0)
    // {
    //     tmp->next = tmp;
    //     tmp = (*lst)->next;
    //     lst = &tmp;
    // }
}
