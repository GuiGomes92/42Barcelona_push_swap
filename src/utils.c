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

#include "../pushswap.h"

int isAllNumbers(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while(i < argc)
    {
      while(argv[i][j] != '\0') {
      if(ft_isdigit(argv[i][j]) != 1) 
      {
          write(1, "Error", 5);
          return(-1);
      }
        j++;
      }
      j = 0;
      i++;
    }
	return(0);
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

//TODO
int isRepeated(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while(i < argc)
    {
      if (ft_strcmp(argv[i],"-2147483648") == 0 || ft_strcmp(argv[i],"2147483647") == 0)
      {
        write(1, "Error", 5);
        return(-1);
      }
      j = i + 1;
      while(j < argc)
      {
        if(ft_strcmp(argv[i], argv[j]) == 0)
        {
          write(1, "Error", 5);
          return(-1);
        }
        j++;
      }
      i++;
    }
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
