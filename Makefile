
NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

HEADERS = $(wildcard includes/*.h)

SOURCES = $(wildcard srcs/*.c ) 

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
	@rm -rf $(wildcard srcs/*.o)

# RULE: DELETE OBJECT FILES AND LIBRARY
fclean: clean
	@echo "Deleting object files and library..."
	@rm -rf $(NAME)

# RULE: RECOMPILES ALL
re: fclean all
	@echo "Recompiling project..."

# PHONY TARGETS
.PHONY: all clean fclean re 