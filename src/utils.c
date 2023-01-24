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

// print the linked list value
void printLinkedlist(t_stack *p)
{
	t_stack *current;
	current = p;

	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}

void print_list(t_stack **list_a, t_stack **list_b)
{
	t_stack *temp_a;
	t_stack *temp_b;
	temp_a = *list_a;
	temp_b = *list_b;
	while (temp_a)
	{
		printf("valor en lista_1:%d, valor en index:%d\n", temp_a->content, temp_a->index);
		temp_a = temp_a->next;
	}
	printf("----------------------------------------\n");
	while (temp_b)
	{
		printf("valor en lista_2:%d, valor en index:%d\n", temp_b->content, temp_b->index);
		temp_b = temp_b->next;
	}
}

void add_indexes(t_stack **lst)
{
	t_stack *temp_lst;

	temp_lst = *lst;
	while (temp_lst)
	{
		temp_lst->index = 1;
		temp_lst = temp_lst->next;
	}
}
