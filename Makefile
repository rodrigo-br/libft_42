NAME	=	libft.a

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
			cc ${FLAGS} -c $< -o ${<:.c=.o} -I.

$(NAME):	${OBJS} ${H_SRC}
			make -C ./printf
			mv ./printf/libftprintf.a ./$(NAME)

all: 		${NAME}

clean:
			${RM} ${OBJS}
			make clean -C ./printf

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re