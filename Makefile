# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtravez <mtravez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 18:55:02 by mtravez           #+#    #+#              #
#    Updated: 2022/10/15 19:53:03 by mtravez          ###   ########.fr        #
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
	ft_toupper.c

all: $(NAME)
	@echo "Making a..out"
	@gcc main.c -L. -lft

$(NAME):
	@echo "Archiving ..."
	@gcc -c $(SRC)
	@ar rc $(NAME) *.o
	@echo "Done ;)"

clean:
	@echo "Cleaning *.o files."
	@/bin/rm -f *.o

fclean: clean
	@echo "cleaning libft.a and a.out"
	@/bin/rm -f $(NAME) a.out

re: fclean all