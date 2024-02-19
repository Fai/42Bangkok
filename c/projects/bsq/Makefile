CC=cc
CFLAGS=-Wall -Wextra -Werror -Iincludes
SRCS= srcs/main.c srcs/utils.c srcs/ft_split.c srcs/set_map.c srcs/init_map.c
OBJS=$(SRCS:.c=.o)
TARGET=bsq

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
