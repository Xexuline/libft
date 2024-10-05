NAME			= libft.a
CC				= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS			= $(wildcard ft_*.c)
OBJS			= $(SRCS:.c=.o)

all: 		$(NAME)
$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:	
	rm -f $(NAME) $(OBJS)
fclean:	
	rm -f $(NAME) $(OBJS)
re: 		fclean all