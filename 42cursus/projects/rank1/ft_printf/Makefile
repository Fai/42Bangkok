# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 17:35:49 by rpithaks          #+#    #+#              #
#    Updated: 2024/03/02 16:08:39 by rpithaks         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
HEADERS	= libft.h ft_printf.h

# source files
SRCS = \
	ft_printf.c

SRCS_BONUS = \
	ft_printf_bonus.c

# object files
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# archive file with create, replace, index
AR = ar rcs

# remove with force
RM = rm -f

# default target
all: $(NAME)
 
# build object file
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -Iincludes$(HEADERS)

# build the library archive
$(NAME): $(OBJS)
	$(AR) $@ $^

# build the bonus library archive
bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $^					

# clean object files
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
						
# clean all files
fclean: clean
	$(RM) $(NAME)

# rebuild
re: fclean all
 
.PHONY: all clean fclean re bonus
