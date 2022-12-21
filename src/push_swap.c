/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:45:27 by gbraga-g          #+#    #+#             */
/*   Updated: 2022/12/20 19:15:19 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../42Barcelona_libft/libft.h"
#include "../pushswap.h"
#include "./utils.c"

int main(int argc, char **argv)
{
	int i;
	t_list	*head = NULL;
	t_list	**current = &head;

	i = 0;
	if(argc > 1) {
		if(isAllNumbers(argc, argv) == -1)
	 		exit(-1);
		if(isRepeated(argc, argv) == -1)
	 		exit(-1);
		while(i < argc) 
		{
		 	if(i == 1)
				head = create_first_node(head, argv[1]);
			else {
				ft_lstadd_back(current, ft_lstnew(argv[i]));

			}
		}
		i++;
	}
	printLinkedlist(head);
	//free(head);
	return (0);
};
