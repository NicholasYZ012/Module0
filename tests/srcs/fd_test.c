#include "libtests.h"

void fd_test(char *s, int fd)
{
	putstr("~~~~FD FUNC TEST~~~~");
	printf("c: %c\n*s: %s\nint: %zu\n", s[0], s, ft_strlen(s));
	putstr("'!' marks the end of an output\n");
	putstr("### FT_PUTCHAR_FD ###");
	ft_putchar_fd(s[0], fd);
	printf("!");
	putstr("\n### FT_PUTSTR_FD ###");
	ft_putstr_fd(s, fd);
	printf("!");
	putstr("\n### FT_PUTENDL_FD ###");
	ft_putendl_fd(s, fd);
	printf("!");
	putstr("\n### FT_PUTNBR_FD ###");
	ft_putnbr_fd(ft_strlen(s), fd);
	printf("!");
	putstr("\n\n");
}