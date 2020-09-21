# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/08 19:32:49 by vfurmane          #+#    #+#              #
#    Updated: 2020/09/21 11:58:25 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(addprefix srcs/, ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
				ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
				ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
				ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlen.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c \
				ft_tolower.c ft_toupper.c)
INCL		=.
OBJS		= $(SRCS:.c=.o)
EXEC		= $(OBJS:.o=.out)
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
MV			= mv -f

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

%.out :		%.o
			$(CC) $(CFLAGS) $< -L.. -lft -o $@

all:		$(EXEC)
			$(MV) srcs/ft_*.out tests/

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(EXEC)

re:			fclean all

.PHONY:		all clean fclean re
