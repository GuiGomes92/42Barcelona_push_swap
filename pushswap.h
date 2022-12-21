/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:16:38 by gbraga-g          #+#    #+#             */
/*   Updated: 2022/12/20 19:16:40 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

typedef struct s_stack
{
	int				num;
	//int				index;
	struct s_stack	*next;
	//struct s_stack	*pre;
}					t_stack;

int isAllNumbers(int argc, char **argv);
int isRepeated(int argc, char **argv);
t_stack *create_first_node(t_stack *p, char *c);
void printLinkedlist(t_stack *p);

#endif
