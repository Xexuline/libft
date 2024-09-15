NAME			= libft.a
CC				= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS			= $(wildcard *.c)
OBJS			= $(SRCS:.c=.o)

all: 		$(NAME)
$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:	
	rm -f $(NAME)
fclean:	
	rm -f $(NAME) $(OBJS)
re: 		fclean all