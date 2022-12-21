# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbraga-g <gbraga-g@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 19:45:14 by gbraga-g          #+#    #+#              #
#    Updated: 2022/11/30 19:45:16 by gbraga-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
NO_COLOR	=	\033[0m
DEF_COLOR 	= \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources

NAME		= push_swap

SRCS_DIR	= src/
OBJ_DIR		= obj/
SRC_FILES	=	push_swap utils
				
SRC 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))


CC = gcc
RM = /bin/rm -f
CFLAGS = -Wall -Wextra -Werror
CFLAGS_D = -Wall -Wextra -Werror -g 

MYLIB_DIR	= 	42Barcelona_libft/
MYLIB		=	$(MYLIB_DIR)libft.a

# ------------------------------ Messages ------------------------------

COMP_START	=	echo "\n🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Starting the compilation...\n"
PROG_READY	=	echo "📥 Program ready!\n"
CLEANED		=	echo "\n💧 $(BOLD_YELLOW)Clean: $(NO_COLOR)Removed all the \".o\" files \n"
FCLEANED	=	echo "\n🧼 $(BOLD_YELLOW)Fclean: $(NO_COLOR)Removed the executables \n"

###

all: 
	@Make libs
	@echo "\n🚧 $(YELLOW)Compiling..$(NO_COLOR)"	
	@Make -s $(NAME)
	@$(PROG_READY)

libs:
	@echo "\n$(GRAY)➖➖➖➖➖    LIBS    ➖➖➖➖➖➖$(NO_COLOR)\n"
	@$(MAKE) -C $(MYLIB_DIR)
	@echo "\n$(GRAY)➖➖➖➖➖ LIBS  DONE ➖➖➖➖➖➖➖➖➖$(NO_COLOR)\n"	

$(NAME): $(OBJS) $(MYLIB) pushswap.h Makefile 
	@echo "🍕 $(WHITE)$(CC) $(CFLAGS) $(OBJS) $(MYLIB) -o $(NAME)$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(OBJS) $(MYLIB) -o $(NAME)

$(SRCS)%.o:$(SRCS)%.c
	@${CC} ${CFLAGS} -c $< -o $@
	@echo "🔧 $(GRAY)${CC} ${CFLAGS} -I./ -c $< -o $@$(DEF_COLOR)"

clean:
	@$(MAKE) clean -C $(MYLIB_DIR)
	@$(RM) $(OBJS)
	@echo "$(MAGENTA)🚽 Cleaned $(NAME)"

fclean: clean
	@$(MAKE) fclean -C $(MYLIB_DIR)
	@$(RM) $(NAME)
	@echo "$(MAGENTA)🚽 Fcleaned $(NAME)"	

re: fclean all

.PHONY: all clean fclean re bonus
