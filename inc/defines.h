
#ifndef DEFINES_H
# define DEFINES_H

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
	struct s_stack	*pre;
} t_stack;

#endif