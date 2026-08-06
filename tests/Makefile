NAME := test

# Locations
SRCDIR := ./srcs

# Source and objects
SRCS :=	$(wildcard srcs/*.c)
OBJ := $(SRCS:%.c=%.o)
TESTSRC := test.c
LIB := libtests.a

# Compiler var
CC := cc
CFLAGS := -Wall -Wextra -Werror -I.
CDEBUG := -fsanitize=address -g
LDFLAGS := -L.. -L. -ltests -lft -lbsd

all: $(NAME) clean

$(NAME): $(LIB)
	$(CC) $(CDEBUG) $(CFLAGS) $(TESTSRC) -o $@ $(LDFLAGS)

nodebug: $(LIB) clean
	$(CC) $(CFLAGS) $(TESTSRC) -o $@ $(LDFLAGS)

$(LIB): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) -c $(CDEBUG) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

alt:
	$(MAKE) all clean -C ../

libclean:
	rm ../libft.a $(LIB)

.PHONY: all clean fclean re alt auto
.SILENT:
