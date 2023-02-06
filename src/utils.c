/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:15:29 by gbraga-g          #+#    #+#             */
/*   Updated: 2023/01/20 20:03:48 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"
#include "../42Barcelona_libft/libft.h"
#include <unistd.h>
#include <stdio.h>

t_stack *lstnew(int content)
{
	t_stack *node;

	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack *last;

	if (*lst && new)
	{
		last = lstlast(*lst);
		last->next = new;
		new->pre = last;
	}
	else
	{
		*lst = new;
	}
}

t_stack *lstlast(t_stack *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void print_list(t_stack **list_a, t_stack **list_b)
{
	t_stack *temp_a;
	t_stack *temp_b;
	temp_a = *list_a;
	temp_b = *list_b;
	while (temp_a)
	{
		printf("valor en lista_1: %d, valor en index: %d\n", temp_a->content, temp_a->index);
		temp_a = temp_a->next;
	}
	while (temp_b)
	{
		printf("valor en lista_2: %d, valor en index: %d\n", temp_b->content, temp_b->index);
		temp_b = temp_b->next;
	}
}

void add_indexes(t_stack **lst)
{
	t_stack *temp_lst;
	int i;

	temp_lst = *lst;
	i = 0;
	while (temp_lst)
	{
		temp_lst->index = find_index(temp_lst->content, lst);
		temp_lst = temp_lst->next;
		i++;
	}
}

int find_index(int num, t_stack **lst)
{
	t_stack *temp_lst;
	int i;

	temp_lst = *lst;
	i = 0;
	while (temp_lst)
	{
		if (temp_lst->content < num)
			i++;
		temp_lst = temp_lst->next;
	}
	return (i);
}

int lst_len(t_stack **lst)
{
	t_stack *temp_lst;
	int i;

	temp_lst = *lst;
	i = 0;
	while (temp_lst)
	{
		i++;
		temp_lst = temp_lst->next;
	}
	return (i);
}

int is_sort(t_stack **lst)
{
	t_stack *temp;

	temp = *lst;
	while (temp->next)
	{
		if (temp->index > temp->next->index)
			return (1);
		temp = temp->next;
	}
	return (0);
}
