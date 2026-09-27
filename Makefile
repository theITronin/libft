
NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

HEADERS =  libft.h

SOURCES = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		  ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		  ft_strnstr.c ft_atoi.c ft_strdup.c

OBJS = $(SOURCES:.c=.o)


# RULE TO CREATE A LIBRARY
$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "********************************"
	@echo "Compilation $(NAME) completed"
	@echo "********************************"



# $(NAME) is the dependence.
all: $(NAME)

# CREATOR OBJS RULE
%.o : %.c $(HEADERS)
	@echo "Compiling..."
	$(CC) $(CFLAGS) -c $< -o $@

# RULE: DELETE OBJECT FILES
clean:
	@echo "Deleting objects files (*.o)..."
	@rm -rf *.o

# RULE: DELETE OBJECT FILES AND LIBRARY
fclean: clean
	@echo "Deleting object files and library..."
	@rm -rf $(NAME)

# RULE: RECOMPILES ALL
re: fclean all
	@echo "Recompiling project..."

# PHONY TARGETS
.PHONY: all clean fclean re 