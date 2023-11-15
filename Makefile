CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ./ft_atoi.c ./ft_calloc.c ./ft_isalpha.c ./ft_isdigit.c ./ft_memchr.c ./ft_memcpy.c ./ft_memset.c ./ft_strdup.c ./ft_strlcpy.c ./ft_strncmp.c ./ft_strrchr.c ./ft_toupper.c ./ft_bzero.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_memcmp.c ./ft_memmove.c ./ft_strchr.c ./ft_strlcat.c ./ft_strlen.c ./ft_strnstr.c ./ft_tolower.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c
SRCSB = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c ./ft_lstlast_bonus.c ./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c ./ft_lstiter_bonus.c ./ft_lstclear_bonus.c ./ft_lstmap_bonus.c
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)
HFILES = libft.h
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus: $(OBJSB)
	
$(OBJS): $(SRCS) $(HFILES)
	$(CC) $(CFLAGS) -c $(SRCS)

$(OBJSB): $(SRCSB) $(HFILES)
	$(CC) $(CFLAGS) -c $(SRCSB)
	ar rcs $(NAME) $(OBJSB)
clean:
	rm -f $(OBJS) $(OBJSB)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
