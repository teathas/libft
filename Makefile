SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
	ft_striteri.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c ft_toupper.c

OBG = $(SRC:.c=.o)

B_SRC = ft_lstadd_back.c ft_lsadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c\
	ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

B_OBG = $(B_SRC:.c=.o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

$(NAME): $(OBG)
	ar rc $(NAME) $(OBG)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBG) $(B_OBG)

fclean: clean
	$(NAME)

re: fclean all

	
	
