CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = bsq
SRCS = $(wildcard srcs/*.c)
OBJS = $(SRCS:.c=.o)
INC = includes

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re