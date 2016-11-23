# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealrick <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 16:37:00 by ealrick           #+#    #+#              #
#    Updated: 2016/11/22 17:04:13 by ealrick          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_tolower.c \
	  ft_toupper.c ft_isprint.c ft_putnbr.c ft_putchar.c ft_putstr.c \
	  ft_strcmp.c ft_strncmp.c ft_strcpy.c ft_strncpy.c ft_strdup.c \
	  ft_strlen.c ft_strstr.c ft_strnstr.c ft_memset.c ft_bzero.c \
	  ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl.c \
	  ft_putendl_fd.c ft_strcat.c ft_strncat.c ft_strlcat.c \
	  ft_strchr.c ft_strrchr.c ft_atoi.c ft_memalloc.c ft_memdel.c \
	  ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
	  ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
	  ft_strjoin.c ft_strtrim.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	  ft_lstiter.c ft_itoa.c ft_lstadd.c ft_lstmap.c ft_strsplit.c \
	  ft_isupper.c ft_islower.c ft_isspace.c ft_iscntrl.c ft_ispunct.c

OBJ = $(SRC:.c=.o)

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

