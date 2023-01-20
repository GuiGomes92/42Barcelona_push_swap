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
#include "../42Barcelona_libft/libft.h"
#include "../inc/defines.h"

void    printLinkedlist(t_stack *p);
void    lstadd_back(t_stack **lst, t_stack *new);
int     isAllNumbers(int argc, char **argv);
int     isRepeated(int argc, char **argv);
int     ft_strcmp(char *s1, char *s2);
t_stack *create_first_node(t_stack *p, char *c);
t_stack *lstnew(int content);
t_stack *lstlast(t_stack *lst);

#endif
