# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/04 11:24:15 by vdragomi          #+#    #+#              #
#    Updated: 2021/07/04 14:02:08 by vdragomi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC			=	ft_itoa.c ft_putnbrbase.c ft_numlenbase.c ft_split.c ft_strtrim.c ft_memccpy.c ft_strdup.c ft_substr.c ft_strchr.c \
  				ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
  				ft_toupper.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
  				ft_memcmp.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_isalpha.c ft_strnstr.c ft_bzero.c ft_atoi.c \
  				ft_memcpy.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_numlen.c ft_uitoa.c \
  				 ft_itoa_base.c ft_putchar.c

INCLUDES = ./

OBJS = $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -c -I $(INCLUDES)
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all