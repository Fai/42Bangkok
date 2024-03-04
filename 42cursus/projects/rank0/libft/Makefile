# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 17:35:49 by rpithaks          #+#    #+#              #
#    Updated: 2024/03/04 05:08:52 by rpithaks         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for archive of c library function libft.a

# variables declariation

# compiler
CC = cc

# compiler flag
CFLAGS = -Wall -Wextra -Werror

# output name
NAME = libft.a

# header file
HEADERS	= libft.h

# source files
SRCS = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

# bonus source files
SRCS_BONUS = \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

# object files
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# archive file with create, replace, index
AR = ar rcs
# remove with force
RM = rm -f

# rules

# default target
all: $(NAME)
 
# build object file
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

# build the library archive
$(NAME): $(OBJS)
	$(AR) $@ $^

# default target
all: $(NAME)

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
 
 # prevent files named like rules conflict
.PHONY: all bonus clean fclean re
