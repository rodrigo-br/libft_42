SRC			=	./ft_bzero.c ft_isalnum.c ft_isalpha.c \
				ft_isdigit.c ft_isprint.c ft_memcpy.c \
				ft_memset.c ft_strlen.c ft_isascii.c \
				ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_memchr.c ft_memcmp.c \
				ft_strncmp.c ft_strnstr.c ft_atoi.c \

H_SRC		=	libft.h

OBJS		=	${SRC:.c=.o}

NAME		=	libft.a

FLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

.c.o:
		cc ${FLAGS} -c $< -o ${<:.c=.o} 

$(NAME):	${OBJS} ${H_SRC}
			ar -rcs $@ $^

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
		gcc ${FLAGS} main.c -lbsd ${NAME}

.PHONY:	all clean fclean re
