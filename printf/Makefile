SRC_PRNT =	ft_printf.c ft_strtilchr.c handle_char.c ft_initializers.c \
			ft_isformat.c handle_n.c handle_str.c \
			handle_unsigned.c handle_ph.c handle_ptr.c ft_itohex.c \
			ft_ptoi.c ft_uitoa.c ft_strtoupper.c handle_hex.c \
			ft_uitohex.c check_flags.c handle_dot.c handle_zero.c \
			handle_minus_n_spac.c

H_SRC	=	ft_printf.h

OBJS	=	${SRC_LIB:.c=.o} ${SRC_PRNT:.c=.o}

NAME	=	libftprintf.a

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
			cc ${FLAGS} -c $< -o ${<:.c=.o} -I.

$(NAME):	${OBJS} ${H_SRC}
			make -C ../libft
			mv ../libft/libft.a ./$(NAME)
			ar -rcs $@ $^

all: 		${NAME}

bonus:		${NAME}

clean:
			${RM} ${OBJS}
			make clean -C ../libft

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re