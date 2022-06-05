NAME = libftprintf.a
INC = ft_printf.h
FLAGS = -Werror -Wextra -Wall -I./$(INC)
CRT = ar -cr
REMOVE = rm -rf

SRCS = ft_treat_hash_bonus.c \
		ft_treat_space_bonus.c \
		ft_treat_plus_bonus.c\
		ft_format.c \
		ft_init.c \
		ft_print_c.c \
		ft_print_int.c \
		ft_print_p.c \
		ft_print_s.c \
		ft_print_u.c \
		ft_print_uppx.c \
		ft_print_x.c \
		ft_printf.c \
		ft_tohex.c \
		ft_type.c \
		ft_putuint.c \
		ft_tohexp.c \
		ft_putnbr_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c

OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CRT) $@ $^
bonus: all

%.o : %.c
	cc $(FLAGS) -c $< -o $@
clean:
	$(REMOVE) $(OBJS)
fclean: clean
	$(REMOVE) $(NAME)
re: fclean all
.PHONY: all clean fclean re make