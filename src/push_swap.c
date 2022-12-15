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

int ft_check_error(char *str)
{
	(void)str;
	//check if duplicates
	//check if not number
	//check if not min int or max int
	// if(ft_strncmp(str, "-2147483648", ft_strlen(str)) != 0 || ft_strncmp(str, "2147483648", ft_strlen(str)) != 0)
	// {
	// 	write(1, "Error", 5);
	// 	exit(-1);
	// }
	return(0);
}

// print the linked list value
void printLinkedlist(t_stack *p) {
  while (p != NULL) {
    printf("%d ", p->num);
    p = p->next;
  }
}

int create_node() {
  // Initialize nodes
  t_stack *head;
  t_stack *one = NULL;
  t_stack *two = NULL;
  t_stack *three = NULL;

  // Allocate memory
  one = malloc(sizeof(t_stack));
  two = malloc(sizeof(t_stack));
  three = malloc(sizeof(t_stack));

  // Assign value values
  one->num = 1;
  two->num = 2;
  three->num = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head = one;
  printLinkedlist(head);
  return(0);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc > 1) {
	while(argv[1][i] != '\0')
	{
		if(ft_check_error(&argv[0][i]) == 0)
		{
			create_node();
		};
		i++;
	}
	}
	return (0);
}
