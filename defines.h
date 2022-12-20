/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:16:38 by gbraga-g          #+#    #+#             */
/*   Updated: 2022/12/20 19:16:40 by gbraga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

typedef struct s_stack
{
	int				num;
	//int				index;
	struct s_stack	*next;
	//struct s_stack	*pre;
}					t_stack;

#endif
