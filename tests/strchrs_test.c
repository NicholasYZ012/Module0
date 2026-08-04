#include "libtests.h"

void strchrs_test(const char *str, int c)
{
	putstr("~~~~STRCHR TEST~~~~");
	printf("string: %s\ntarget: %c\nascii: %d\n", str, c, c);
	printf("##MINE##\n1st occurence of \"%c\": string[%ld]\n", c, ft_strchr(str, c) - str);
	printf("##LIB##\n1st occurence of \"%c\": string[%ld]\n\n", c, strchr(str, c) - str);
	putstr("~~~~STRRCHR TEST~~~~");
	printf("##MINE##\nlast occurence of \"%c\": string[%ld]\n", c, ft_strrchr(str, c) - str);
	printf("##LIB##\nlast occurence of \"%c\": string[%ld]\n\n\n", c, strrchr(str, c) - str);
}