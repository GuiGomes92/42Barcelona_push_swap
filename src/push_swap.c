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
#include "../42Barcelona_ft_printf/include/libft.h"
#include "../42Barcelona_ft_printf/include/ft_printf.h"
#include "../inc/pushswap.h"

int main(int argc, char **argv)
{
	int i;
	t_stack *a;
	t_stack *b;
	t_stack *temp;

	a = NULL;
	b = NULL;

	(void)b;
	i = 1;
	if (argc > 1)
	{
		if (isAllNumbers(argc, argv) == -1 || isRepeated(argc, argv) == -1)
			exit(-1);
		while (i < argc)
		{
			temp = lstnew(ft_atoi(argv[i]));
			lstadd_back(&a, temp);
			i++;
		}
		add_indexes(&a);
		if (is_sort(&a) == 0)
			exit(0);
		if (argc <= 5)
		{
			ft_handleSmall(&a, &b);
		};
	}
	print_list(&a, &b);
	//      free(head);
	return (0);
};
