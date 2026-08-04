#include "libtests.h"

void memcmp_test(const char *s1, const char *s2, size_t n)
{
	putstr("~~~~MEMCMP TEST~~~~");
	printf("s1: %s\ns2: %s\n no of chars to compare: %ld\n", s1, s2, n);
	printf("### MINE DIFF IS %d ###\n", ft_memcmp(s1, s2, n));
	printf("### LIB DIFF IS %d ###", memcmp(s1, s2, n));
}
