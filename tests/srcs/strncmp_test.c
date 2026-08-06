#include "libtests.h"

void strncmp_test(const char *s1, const char *s2, size_t n)
{
	putstr("~~~~STRNCMP TEST~~~~");
	printf("s1: %s\ns2: %s\nn: %ld\n", s1, s2, n);
	printf("##MINE##\ndiff: %d\n", ft_strncmp(s1, s2, n));
	printf("##LIB##\ndiff: %d\n\n\n", strncmp(s1, s2, n));
}