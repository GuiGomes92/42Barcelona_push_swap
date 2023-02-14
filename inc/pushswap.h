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
#define PUSHSWAP_H
#include "../42Barcelona_ft_printf/include/libft.h"
#include "../42Barcelona_ft_printf/include/ft_printf.h"
#include "../inc/defines.h"

void print_list(t_stack **list_a, t_stack **list_b);
void lstadd_back(t_stack **lst, t_stack *new);
void add_indexes(t_stack **lst);
void ft_handle3(t_stack **lst);
void ft_handle5(t_stack **lst_a, t_stack **lst_b);
void swap(t_stack **lst, char *command);
void reverse(t_stack **lst, char *command);
void rotate(t_stack **lst, char *command);
void push(t_stack **a, t_stack **b, char *command);
int isAllNumbers(int argc, char **argv);
int find_index(int num, t_stack **lst);
int lst_len(t_stack **lst);
int is_sort(t_stack **lst);
int isRepeated(int argc, char **argv);
int ft_strcmp(char *s1, char *s2);
t_stack *create_first_node(t_stack *p, char *c);
t_stack *lstnew(int content);
t_stack *lstlast(t_stack *lst);

#endif
