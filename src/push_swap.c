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

int ft_check_error(char *str)
{
	//check if duplicates
	//check if not number
	//check if not min int or max int
	if(ft_strncmp(str, "-2147483648", ft_strlen(str)) != 0 || ft_strncmp(str, "2147483648", ft_strlen(str)) != 0)
	{
		write(1, "Error", 5);
		exit(-1);
	}
	return(0);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc > 1) {
	while(argv[1][i] != '\0')
	{
		ft_check_error(&argv[0][i]);
		i++;
	}
	}
	return (0);
}
