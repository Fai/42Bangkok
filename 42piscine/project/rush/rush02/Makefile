CC=cc
CFLAGS=-Wall -Wextra -Werror -Iincludes
SRCS= srcs/create_dict_struct.c srcs/create_input.c srcs/free.c srcs/ft_split.c srcs/main.c \
	srcs/put_word.c srcs/utils.c srcs/utils2.c srcs/create_input2.c
OBJS=$(SRCS:.c=.o)
TARGET=rush-02

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

srcs/%.o : srcs/%.c
	$(CC) $(CFLSGS) -Iincludes -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(TARGET)

re: fclean all

.PHONY: all clean fclean re
