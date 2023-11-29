#####################
##########ARGUMENTS

NAME	= libft.a
CFLAG	= -Wall -Wextra -Werror
CC		= cc

####################
##########SOURCES

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

SRCSBONUS = ${SRCS} ${BONUS}

OBJ = ${SRCS:.c=.o}

OBJS = ${SRCSBONUS:.c=.o}

# Include
INC	= libft.h

#####################
##########RULES

all: ${NAME}

${NAME} : ${OBJ}
	ar -crs ${NAME} ${OBJ}

%.o : %.c
	${CC} ${CFLAG} -c $< -o $@

bonus: ${OBJS}
	ar -crs ${NAME} ${OBJS}

so:
	$(CC) -nostartfiles -fPIC $(CFLAG) $(SRCSBONUS)
	cc -nostartfiles -shared -o libft.so $(OBJS)

clean: 
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus