SRCS = $(addsuffix .c, \
	ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen \
	ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat \
	ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr \
	ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr \
	ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
	ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd)
OBJS := $(SRCS:%.c=%.o)
NAME = libft.a
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror -I ./
RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

ifneq ($(shell uname), Darwin)
breaker:
			$(CC) -nostartfiles -shared -fPIC -ldl $(CFLAGS) -o libft.so $(SRC) $(SRCBONUS)
else
breaker:
			$(CC) -dynamiclib $(CFLAGS) -o libft.so $(SRC) $(SRCBONUS) -L../obj -lmalloc
endif

re: fclean all

.PHONY: all clean fclean re
