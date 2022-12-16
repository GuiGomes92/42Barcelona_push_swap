/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:45:27 by gbraga-g          #+#    #+#             */
/*   Updated: 2022/11/30 19:52:27 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../42Barcelona_libft/libft.h"
#include "../defines.h"
#include "./utils.c"

int main(int argc, char **argv)
{
	int i;
	t_stack	*head;

	i = 1;
	if(argc > 1) {
	if(ft_check_error(argc, argv) == -1)
		exit(-1);
	while(i < argc) {
		if(i == 1)
		{
			head = malloc(sizeof(t_list));
			if (head == NULL)
				exit(-1);
			head->num = ft_atoi(argv[i]);
			head->next = NULL;
		}
		i++;
	}
	//printLinkedlist(head);
	free(head);
	return (0);
}}
