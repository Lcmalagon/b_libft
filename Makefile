# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmalagon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 01:32:10 by lmalagon          #+#    #+#              #
#    Updated: 2018/09/25 22:54:24 by lmalagon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Werror -Wall -Wextra
SRCS = ft_memset.c \
ft_strhcr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdup.c \
ft_strlen.c \
ft_tolower.c \
ft_strncopy.c
ft_isdigit.c \
ft_toupper.c \

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(SRCS) -c
		ar rc #(NAME) *.0
		ranlib $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm-f $(NAME)

re: fclean all
