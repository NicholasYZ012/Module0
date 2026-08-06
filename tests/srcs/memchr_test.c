#include "libtests.h"

void memchr_test(const void *s, int c, size_t n)
{
	putstr("~~~~MEMCHR TEST~~~~");
	printf("string: %s\ntarget: %c\nascii: %d\nlength to search: %ld\n", (char *)s, c, c, n);
	printf("##MINE##\n1st occurence of \"%c\": string[%ld]\n", c, ft_memchr(s, c, n) - s);
	printf("##LIB##\n1st occurence of \"%c\": string[%ld]\n\n", c, memchr(s, c, n) - s);
}