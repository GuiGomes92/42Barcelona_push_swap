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

NAME = push_swap
CC = gcc
LIBFT_DIR = 42Barcelona_libft
CFLAGS = -Wall -Wextra -Werror -g 
INC_DIR = inc
OBJ_DIR = obj/
SRC_DIR = src/

#FSANITIZE	:= -fsanitize=address -g3

SRC_FILES	= 	push_swap utils

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPS 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_FILES)))

RM = rm -f



$(OBJ_DIR)%.o: $(SRC_DIR)%.c
		mkdir -p $(OBJ_DIR)
		$(CC) -I $(INC_DIR)  -c $(CFLAGS) -MMD $< -o $@

all: makelib
	@$(MAKE) $(NAME)

makelib:
		@$(MAKE) -C $(LIBFT_DIR)

bonus:
		@$(MAKE) all

-include $(DEPS)
$(NAME) :	$(LIBFT_DIR)/libft.a $(OBJ) Makefile
		make bonus -sC $(LIBFT_DIR)
		$(CC) $(CFLAGS) $(FSANITIZE) $(OBJ) $(LIBFT_DIR)/libft.a -o $(NAME)



clean:
		$(RM) -r $(OBJ_DIR) $(DEPS)
		$(RM) $(LIBFT_DIR)/libft.a
		@make clean -C $(LIBFT_DIR)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY : all clean re fclean makelibft
