#include "libtests.h"

void strjoin_test(const char *s1, const char *s2)
{
    putstr("~~~~STRJOIN TEST~~~~");
	char *joined = ft_strjoin(s1, s2);
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("Joined: %s\n", joined);
	printf("Ascii: ");
    for (size_t i = 0; i <= strlen(joined); i++)
		printf("%d ", joined[i]);
	putstr("\n\n");
	free(joined);
}