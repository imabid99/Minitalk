# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imabid <imabid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 12:01:08 by imabid            #+#    #+#              #
#    Updated: 2021/12/11 14:01:16 by imabid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = client
NAME2 = server

CC = cc
CC_FLAGS = -Wall -Wextra -Werror
RM = rm -f


SRCS1 =  client.c \
		minitalk_utils.c \

SRCS2 =  server.c \
		minitalk_utils.c \

OBJS1 = $(SRCS1:.c=.o)
OBJS2 = $(SRCS2:.c=.o)


%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@
all: $(NAME1) $(NAME2) 

$(NAME1): $(OBJS1)
	$(CC) $(CC_FLAGS) -o $@ $^
$(NAME2): $(OBJS2)
	$(CC) $(CC_FLAGS) -o $@ $^

clean:
	$(RM) $(OBJS1) $(OBJS2)	

fclean: clean
	$(RM) $(NAME1) $(NAME2)

re: fclean all