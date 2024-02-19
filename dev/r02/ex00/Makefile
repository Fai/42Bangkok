# Set compiler
CC = cc

# Set flags, also tells to include "includes" directory for the .h file
CFLAGS = -Wall -Wextra -Werror -Iincludes

# This tells where the .c files are
SRCS = $(wildcard srcs/*.c srcs/utils/*.c)

# This tells that the .o files are same place as .c files
OBJS = $(SRCS:.c=.o)

# This is the name of the executable
EXECNAME = rush-02

# This create the rule all, to build the executable
all: $(EXECNAME)

# This compiles all the .c files into .o files. Flag -c does not link the files
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# This links all the .o files into the executable
$(EXECNAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# removes the .o files
clean:
	rm -f $(OBJS)

# removes the .o files and the executable
fclean:
	rm -f $(OBJS) $(EXECNAME)

# runs fclean and all again
re: fclean all

# tells this targets do not represent files
.PHONY: all clean fclean re

