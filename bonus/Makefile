NAME_bonus1 = client_bonus
NAME_bonus2 = server_bonus

CC = cc
CC_FLAGS = -Wall -Wextra -Werror
RM = rm -f


SRCS_bonus1 =  client_bonus.c \
		minitalk_utils_bonus.c \

SRCS_bonus2 =  server_bonus.c \
		minitalk_utils_bonus.c \

OBJS_bonus1 = $(SRCS_bonus1:.c=.o)
OBJS_bonus2 = $(SRCS_bonus2:.c=.o)


%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME_bonus1) $(NAME_bonus2) 

$(NAME_bonus1): $(OBJS_bonus1)
	$(CC) $(CC_FLAGS) -o $@ $^
$(NAME_bonus2): $(OBJS_bonus2)
	$(CC) $(CC_FLAGS) -o $@ $^

clean:
	$(RM) $(OBJS_bonus1) $(OBJS_bonus2)	

fclean: clean
	$(RM) $(NAME_bonus1) $(NAME_bonus2)

re: fclean all