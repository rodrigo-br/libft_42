SRC			=	./ft_bzero.c ft_isalnum.c ft_isalpha.c \
				ft_isdigit.c ft_isprint.c ft_memcpy.c \
				ft_memset.c ft_strlen.c ft_isascii.c \
				ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c \
				ft_strrchr.c ft_memchr.c ft_memcmp.c \
				ft_strncmp.c ft_strnstr.c ft_atoi.c \
				ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c \
				ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c \


BONUS_SRC	=	ft_lstnew.c ft_lstadd_front.c \
				ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c \


H_SRC		=	libft.h

OBJS		=	${SRC:.c=.o}

BONUS_OBJS	=	${BONUS_SRC:.c=.o}

NAME		=	libft.a

FLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

.c.o:
		cc ${FLAGS} -c $< -o ${<:.c=.o} 

$(NAME):	${OBJS} ${H_SRC}
			ar -rcs $@ $^

all: ${NAME}

bonus: ${BONUS_OBJS} ${H_SRC}
			ar -rsc ${NAME} $^

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
