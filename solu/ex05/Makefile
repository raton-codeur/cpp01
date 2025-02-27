# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 14:46:31 by tblaase           #+#    #+#              #
#    Updated: 2022/03/18 18:10:09 by tblaase          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harl

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

#directories
SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/

#controll codes
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

#source files
SRC_FILES	=	Harl.cpp main.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

#paths
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

#all rule
all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)            ___ ___        ___    _____    _     _      ___ ___   \n$(RESET)"
	@printf "$(GREEN) ___ _ _   |   |  _|   ___|  _|  |    _| _| |_ _| |_   |   |_  |  \n$(RESET)"
	@printf "$(GREEN)| -_|_'_|  | | |_  |  | . |  _|  |   |_ |_   _|_   _|  | | |_| |_ \n$(RESET)"
	@printf "$(GREEN)|___|_,_|  |___|___|  |___|_|    |_____|  |_|   |_|    |___|_____|\n$(RESET)"
	@printf "$(GREEN)                                                                  \n$(RESET)"
	@printf "\n"

#compile the executable
$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling [$(NAME)]...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

#compile objects
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling [$@]...$(RESET)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	@printf "$(UP)$(CUT)"
	@echo "$(GREEN)Finished [$@]$(RESET)"
	@printf "$(UP)$(CUT)"

#clean rule
clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "$(BLUE)Deleting all objects from /ex05...$(RESET)"; else \
	echo "No objects to remove from /ex05."; \
	fi;

#fclean rule
fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(BLUE)Deleting $(NAME) from /ex05...$(RESET)"; else \
	echo "No Executable to remove from /ex05."; \
	fi;

#re rule
re: fclean all

#phony
.PHONY: all clean fclean re
