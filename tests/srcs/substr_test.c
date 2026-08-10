#include "libtests.h"

void substr_test(const char *s, unsigned int start, size_t len)
{
    char *sub = ft_substr(s, start, len);
    putstr("~~~~SUBSTR TEST~~~~");
    printf("ori: %s\nstarting index: %u\nsubstr len: %ld\n", s, start, len);
    printf("Substring in int: ");
    for (size_t i = 0; i < len + 1; i++)
		printf("%d ", sub[i]);
        putstr("");
    printf("Substring in ascii: ");
    for (size_t i = 0; i < len + 1; i++)
		printf("%c", sub[i]);
	printf("%s\n", sub);
    putstr("\n\n");
    free(sub); 
}