#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>
// cc -Wall -Werror -Wextra test.c -L . -lft -lbsd -o test

int main(){
	char dest[] = "a";
	char src[] = "";
	printf("%s, %lu\n", dest, ft_strlcpy(dest, src, 4));
	printf("%s, %lu\n", dest, strlcpy(dest, src, 4));
}