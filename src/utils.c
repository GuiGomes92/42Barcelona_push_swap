/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:15:29 by gbraga-g          #+#    #+#             */
/*   Updated: 2022/12/20 19:15:35 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap.h"
#include "../42Barcelona_libft/libft.h"
#include <unistd.h>
#include <stdio.h>

t_stack	*lstnew(int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	 lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

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

t_stack	*lstlast(t_stack *lst)
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
void printLinkedlist(t_stack *p) {
  t_stack* current;
  current = p;

   while (current != NULL) {
     printf("%d ", (int)current->content);
     current = current->next;
   }
}
