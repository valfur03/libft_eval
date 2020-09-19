# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/08 19:32:49 by vfurmane          #+#    #+#              #
#    Updated: 2020/09/19 08:50:04 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/*.c
INCL		= ..
OBJS		= $(SRCS:.c=.o)
EXEC		= $(OBJS:.o=.out)
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

%.out :		%.o
			$(CC) $(CFLAGS) $< -L.. -lft -o $@

all:		$(EXEC)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(EXEC)

re:			fclean all

.PHONY:		all clean fclean re
