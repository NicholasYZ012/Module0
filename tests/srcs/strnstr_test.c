#include "libtests.h"

void strnstr_test(const char *s1, const char *s2, size_t len)
{
	putstr("~~~~STRNSTR TEST~~~~");
	printf("s1: %s\ns2: %s\nlength to compare: %ld\n", s1, s2, len);
	printf("### MINE: %s ###\n", ft_strnstr(s1, s2, len));
	printf("### LIB: %s ###\n\n\n", strnstr(s1, s2, len));
}