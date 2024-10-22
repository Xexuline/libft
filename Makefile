# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 11:23:24 by jsabroso          #+#    #+#              #
#    Updated: 2024/10/21 11:23:24 by jsabroso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			  = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

BONUS_SRCS  =  ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstmap_bonus.c

NAME			  = libft.a
CC				  = cc
CFLAGS		  = -Wall -Wextra -Werror
OBJS			  = $(filter-out ft_lst*.c ,$(SRCS:.c=.o))
BONUS_OBJS  = $(BONUS_SRCS:.c=.o)

all:      $(NAME)
$(NAME):	$(OBJS)
	          ar rcs $(NAME) $(OBJS)
bonus:    $(OBJS) $(BONUS_OBJS)
			      ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
clean:	
	          rm -f $(OBJS) $(BONUS_OBJS)
fclean:	
	          rm -f $(NAME) $(OBJS) $(BONUS_OBJS)
re: 		  fclean all
.PHONY: all clean fclean re bonus