NAME	= libftprintf.a 

SRCS	=	ft_putchar_i.c ft_puthex_i.c ft_putint_i.c ft_putnbr_base_i.c ft_putstr_i.c ft_putui_i.c ft_printf.c

OBJS	=	${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME):	
		${CC} -c ${CFLAGS} ${SRCS} 
		ar crs ${NAME} ${OBJS}
		
clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all, clean, fclean, re
