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

t_list *create_first_node(t_list *p, char *c);
void printLinkedlist(t_list *p);
int isAllNumbers(int argc, char **argv);
int isRepeated(int argc, char **argv);
int	ft_strcmp(char *s1, char *s2);

#endif
