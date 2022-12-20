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

#include "../defines.h"

int ft_check_error(int argc, char **argv)
{
    int i;

    i = 0;
    //check if not number
    while(i <= argc)
    {
        if (ft_atoi(argv[i]) == 0)
        {
            write(1, "Error", 5);
            return(-1);
        }
        i++;
    }
	//check if duplicates
	//check if not min int or max int
	return(0);
}

t_stack *create_first_node(t_stack *p, char *c)
{	

	p = malloc(sizeof(t_list));
		if (p == NULL)
			exit(-1);
	p->num = ft_atoi(c);
	p->next = NULL;
	return (p);

}

// print the linked list value
void printLinkedlist(t_stack *p) {
  t_stack* current;
  current = p;

   while (current != NULL) {
     printf("%d ", current->num);
     current = current->next;
   }
}
