# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 18:55:02 by mtravez           #+#    #+#              #
#    Updated: 2022/10/26 15:07:22 by mtravez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=ft_atoi.c		\
	ft_bzero.c		\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memset.c		\
	ft_strchr.c		\
	ft_memmove.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_tolower.c	\
	ft_calloc.c		\
	ft_toupper.c	\
	ft_strdup.c		\
	ft_substr.c		\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c		\
	ft_itoa.c		\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c

SRCOBJ=ft_atoi.o	\
	ft_bzero.o		\
	ft_isalnum.o	\
	ft_isalpha.o	\
	ft_isascii.o	\
	ft_isdigit.o	\
	ft_isprint.o	\
	ft_memchr.o		\
	ft_memcmp.o		\
	ft_memcpy.o		\
	ft_memset.o		\
	ft_strchr.o		\
	ft_memmove.o	\
	ft_strlcat.o	\
	ft_strlcpy.o	\
	ft_strlen.o		\
	ft_strncmp.o	\
	ft_strnstr.o	\
	ft_strrchr.o	\
	ft_tolower.o	\
	ft_calloc.o		\
	ft_toupper.o	\
	ft_strdup.o		\
	ft_substr.o		\
	ft_strjoin.o	\
	ft_strtrim.o	\
	ft_split.o		\
	ft_itoa.o		\
	ft_strmapi.o	\
	ft_striteri.o	\
	ft_putchar_fd.o	\
	ft_putstr_fd.o	\
	ft_putendl_fd.o	\
	ft_putnbr_fd.o

BONUS=ft_lstnew.c		\
	ft_lstadd_front.c	\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstadd_back.c	\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstiter.c		\
	ft_lstmap.c

OBJBONUS=ft_lstnew.o	\
	ft_lstadd_front.o	\
	ft_lstsize.o		\
	ft_lstlast.o		\
	ft_lstadd_back.o	\
	ft_lstdelone.o		\
	ft_lstclear.o		\
	ft_lstiter.o		\
	ft_lstmap.o

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@cc -c $(SRC) $(FLAGS)
	@ar rc $(NAME) $(SRCOBJ)

clean:
	@/bin/rm -f $(SRCOBJ) $(OBJBONUS)

fclean: clean
	@/bin/rm -f $(NAME) a.out

re: fclean all

bonus:
	@cc -c $(BONUS) $(FLAGS)
	@ar rc $(NAME) $(OBJBONUS)
