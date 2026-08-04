NAME := test

# Source and objects
SRCS :=	putstr.c strlcat_test.c touplower_test.c strchrs_test.c strncmp_test.c memcmp_test.c\
		strnstr_test.c
OBJ := $(SRCS:%.c=%.o)
TESTSRC := test.c
LIB := libtests.a

# Compiler var
CC := cc
CFLAGS := -Wall -Wextra -Werror
LDFLAGS := -L.. -L. -ltests -lft -lbsd

all: $(NAME)

$(NAME): $(LIB) alt
	$(CC) $(CFLAGS) $(TESTSRC) -o $@ $(LDFLAGS)

$(LIB): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

alt:
	$(MAKE) all clean -C ../

sclean: clean
	rm ../libft.a $(LIB)

auto: all sclean

.PHONY: all clean fclean re alt
.SILENT:
