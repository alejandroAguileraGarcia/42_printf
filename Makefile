NAME	= libftprintf.a 

SRCS	=	ft_pfutils.c ft_printf.c

OBJS	=	${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME):	${OBJS}
		ar crs ${NAME} ${OBJS}
		
clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all, clean, fclean, re
